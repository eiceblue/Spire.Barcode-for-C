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
    wstring outputFile = output_path + L"BarCodeType.Code11.png";

    // Create a barcode settings object
    intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

    // Set the barcode background color to light gray
    barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

    // Set the barcode type to Code11
    barCodeSetting->SetType(BarCodeType::Code11);

    // Enable checksum functionality
    barCodeSetting->SetUseChecksum(CheckSumMode::ForceEnable);

    // Show the checksum character
    barCodeSetting->SetShowCheckSumChar(true);

    // Show text at the bottom of the barcode
    barCodeSetting->SetShowTextOnBottom(true);

    // Set the border width
    barCodeSetting->SetBorderWidth(100);

    // Set the height of the bars in the barcode
    barCodeSetting->SetBarHeight(30);

    // Set the top margin of the barcode
    barCodeSetting->SetTopMargin(20);

    // Set the data for the barcode
    std::wstring data = L"12345-67890";
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