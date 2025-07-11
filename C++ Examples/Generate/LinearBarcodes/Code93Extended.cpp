#include "../pch.h"

using namespace std;
using namespace Spire::Barcode;

// Define a function to convert a wide string to a regular string
string wstring2string(const std::wstring& wstr)
{
    // Create an empty string to store the result
    std::string result;

    // Reserve space for the result string, with the same size as the input wide string
    result.reserve(wstr.size());

    // Iterate through each character in the input wide string
    for (size_t i = 0; i < wstr.size(); ++i)
    {
        // Convert the character from the wide string to a regular character and add it to the result string
        result += static_cast<char>(wstr[i] & 0xFF);
    }

    // Return the converted result string
    return result;
}

// Define the main function
int main()
{
    // Set the output path
    wstring output_path = OUTPUTPATH;

    // Set the output file name, including the file type and path
    wstring outputFile = output_path + L"BarCodeType.Code93Extended.png";

    // Create a barcode settings object
    intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

    // Set the barcode type to Code93Extended
    barCodeSetting->SetType(BarCodeType::Code93Extended);

    // Enable checksum functionality
    barCodeSetting->SetUseChecksum(CheckSumMode::ForceEnable);

    // Set the background color to light gray
    barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

    // Show text at the bottom of the barcode
    barCodeSetting->SetShowTextOnBottom(true);

    // Set the Codabar start character to A
    barCodeSetting->SetCodabarStartChar(CodabarChar::A);

    // Set the Codabar stop character to D
    barCodeSetting->SetCodabarStopChar(CodabarChar::D);

    // Set the barcode data
    std::wstring data = L"(abc) 123456789";
    barCodeSetting->SetData(data.c_str());

    // Create a barcode generator object
    intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

    // Generate the barcode image
    std::vector<byte> barcodeimage = generator->GenerateImage();

    // Open the output file in binary mode
    std::ofstream outFile(wstring2string(outputFile), std::ios::binary);

    // If the file is successfully opened
    if (outFile.is_open())
    {
        // Write the barcode image data to the file
        outFile.write(reinterpret_cast<const char*>(barcodeimage.data()), barcodeimage.size());

        // Close the file
        outFile.close();
    }
}