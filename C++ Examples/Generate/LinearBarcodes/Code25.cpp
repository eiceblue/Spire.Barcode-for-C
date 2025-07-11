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
    // Define the output path
    wstring output_path = OUTPUTPATH;

    // Define the output file name
    wstring outputFile = output_path + L"BarCodeType.Code25.png";

    // Create a barcode settings object
    intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

    // Set the barcode type to Code25
    barCodeSetting->SetType(BarCodeType::Code25);

    // Disable checksum functionality
    barCodeSetting->SetUseChecksum(CheckSumMode::ForceDisable);

    // Set the background color to light gray
    barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

    // Show text at the bottom of the barcode
    barCodeSetting->SetShowTextOnBottom(true);

    // Set the Codabar start character to A
    barCodeSetting->SetCodabarStartChar(CodabarChar::A);

    // Set the Codabar stop character to D
    barCodeSetting->SetCodabarStopChar(CodabarChar::D);

    // Set the barcode data
    std::wstring data = L"01234567";
    barCodeSetting->SetData2D(data.c_str());

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