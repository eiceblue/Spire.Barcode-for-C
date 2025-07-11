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

// Define a function that takes two parameters: the output file path and the content string
void WriteAllTextUtf8(wstring outputFilePath, wstring& contentStr)
{
    // Create a wide-character output file stream object for writing to a UTF-8 encoded file
    std::wofstream outputFile(wstring2string(outputFilePath), std::ios::out | std::ios::binary);

    // Set the output file stream's locale to the system default locale to support UTF-8 encoding
    outputFile.imbue(std::locale(""));

    // Write the content string into the output file stream
    outputFile << contentStr;

    // Close the output file stream
    outputFile.close();
}


// Define the main function
int main()
{
	// Set the file path
	wstring input_path = DATAPATH;
	wstring output_path = OUTPUTPATH;
	wstring outputFile = output_path + L"out.txt";

	//Set whether to include processing checkSum data
	std::wstring s = BarcodeScanner::ScanOne(DATAPATH"barcode.png",TRUE);

	// Write the contents of the wstring to the output file in UTF-8 format
	WriteAllTextUtf8(outputFile, s);

	//clear the vector
	s.clear();
}





