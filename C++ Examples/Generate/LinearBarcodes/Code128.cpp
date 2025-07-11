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
    wstring outputFile = output_path + L"BarCodeType.Code128_Auto.png";

    // Create a barcode settings object
    intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

    // Set the background color to light gray
    barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

    // Set the barcode type to Code128
    barCodeSetting->SetType(BarCodeType::Code128);

    // Set Code128 mode to automatic
    barCodeSetting->SetCode128SetMode(Code128SetMode::Auto);

    // Show text at the bottom of the barcode
    barCodeSetting->SetShowTextOnBottom(true);

    // Set the data for the barcode generation
    std::wstring data = L"ABCD 12345 abcd";
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