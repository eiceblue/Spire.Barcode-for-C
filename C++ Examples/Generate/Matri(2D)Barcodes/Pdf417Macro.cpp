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
    // Set the file path
	wstring output_path = OUTPUTPATH;
	wstring outputFile = output_path + L"BarCodeTypePdf417Macro.png";

	// Create a new instance of BarcodeSettings and assign it to barCodeSetting
	intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

	// Set the barcode type to Pdf417Macro
	barCodeSetting->SetType(BarCodeType::Pdf417Macro);

	// Set the background color to white smoke
	barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

	// Set the data mode for Pdf417 to Auto
	barCodeSetting->SetPdf417DataMode(Pdf417DataMode::Auto);

	// Set the error correction level for Pdf417 to Level 2
	barCodeSetting->SetPdf417ECL(Pdf417ECL::Level2);

	// Set the Pdf417 truncated property to false
	barCodeSetting->SetPdf417Truncated(false);

	// Set the X-Y ratio for the barcode to 3
	barCodeSetting->SetXYRatio(3);

	// Set the border width of the barcode to 100
	barCodeSetting->SetBorderWidth(100);

	// Set the height of the barcode bars to 100
	barCodeSetting->SetBarHeight(100);

	// Set the property to show text on the bottom of the barcode to true
	barCodeSetting->SetShowTextOnBottom(true);

	// Set the data for the 2D barcode 
	std::wstring data = L"10264783";
	barCodeSetting->SetData2D(data.c_str());

	// Create a new instance of BarCodeGenerator with the given barcode settings
	intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

	// Generate the barcode image using the generator
	std::vector<byte> barcodeimage = generator->GenerateImage();

	// Open the output file in binary mode
	std::ofstream outFile(wstring2string(outputFile), std::ios::binary);

	// Check if the output file is open
	if (outFile.is_open())
	{
		// Write the barcode image data to the output file
		outFile.write(reinterpret_cast<const char*>(barcodeimage.data()), barcodeimage.size());

		// Close the output file
		outFile.close();
	}

}





