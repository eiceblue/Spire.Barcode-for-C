# c++ precompiled header
## defines path constants for data and output directories
```cpp
#define DATAPATH L"Data\\"
#define OUTPUTPATH L"Output\\"
```

---

# c++ codabar barcode generation
## Generate Codabar barcode with specific settings
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set the barcode type to Codabar
barCodeSetting->SetType(BarCodeType::Codabar);

// Disable checksum functionality
barCodeSetting->SetUseChecksum(CheckSumMode::ForceDisable);

// Show text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the start character for Codabar to A
barCodeSetting->SetCodabarStartChar(CodabarChar::A);

// Set the stop character for Codabar to D
barCodeSetting->SetCodabarStopChar(CodabarChar::D);

// Set the barcode data to "2030405060"
std::wstring data = L"2030405060";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire.barcode cpp code11
## generate Code11 barcode with specific settings
```cpp
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
```

---

# spire.barcode cpp code128
## generate Code128 barcode
```cpp
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
```

---

# spire barcode c++ code25 generation
## generate Code25 linear barcode with specific settings
```cpp
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
```

---

# Code39 Barcode Generation
## Generate Code39 barcode using Spire.Barcode for C++
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to Code39
barCodeSetting->SetType(BarCodeType::Code39);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Disable checksum functionality
barCodeSetting->SetUseChecksum(CheckSumMode::ForceDisable);

// Show text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the Codabar start character to A
barCodeSetting->SetCodabarStartChar(CodabarChar::A);

// Set the Codabar stop character to D
barCodeSetting->SetCodabarStopChar(CodabarChar::D);

// Set the barcode data
std::wstring data = L"ABC 123456789";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# Spire.Barcode C++ Code39Extended
## Generate Code39Extended barcode
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to Code39Extended
barCodeSetting->SetType(BarCodeType::Code39Extended);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Disable checksum functionality
barCodeSetting->SetUseChecksum(CheckSumMode::ForceDisable);

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
```

---

# spire.barcode cpp code93
## generate Code93 barcode
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to Code93
barCodeSetting->SetType(BarCodeType::Code93);

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
std::wstring data = L"ABC123456789";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# c++ code93 extended barcode generation
## generate Code93Extended barcode using Spire.Barcode
```cpp
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
```

---

# spire barcode cpp generation
## generate Deutsche Post Identcode barcode
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings(); 

// Set the barcode type to Deutsche Post Identcode
barCodeSetting->SetType(BarCodeType::DeutschePostIdentcode);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Show text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the wide-to-narrow ratio to 3
barCodeSetting->SetWideNarrowRatio(3);

// Set the data for the barcode generation
std::wstring data = L"56400000005";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire barcode cpp generation
## generate Deutsche Post Leitcode barcode
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to Deutsche Post Leitcode
barCodeSetting->SetType(BarCodeType::DeutschePostLeitcode);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Show text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the wide-to-narrow ratio to 3
barCodeSetting->SetWideNarrowRatio(3);

// Set the data for the barcode generation
std::wstring data = L"8173908300200";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# EAN-128 Barcode Generation
## Generate EAN-128 barcode with custom settings
```cpp
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to EAN128
barCodeSetting->SetType(BarCodeType::EAN128);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Force enable checksum
barCodeSetting->SetUseChecksum(CheckSumMode::ForceEnable);

// Set whether the barcode has a border
barCodeSetting->SetHasBorder(true);

// Set the supplemental data
barCodeSetting->SetSupData(L"12345");

// Set the space between supplemental data
barCodeSetting->SetSupSpace(10);

// Set whether to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width of the barcode
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"501234567890";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire barcode ean13 generation
## Generate EAN13 barcode with specific settings
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to EAN13
barCodeSetting->SetType(BarCodeType::EAN13);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Force enable checksum
barCodeSetting->SetUseChecksum(CheckSumMode::ForceEnable);

// Set whether the barcode has a border
barCodeSetting->SetHasBorder(true);

// Set the supplemental data
barCodeSetting->SetSupData(L"12345");

// Set the space between supplemental data
barCodeSetting->SetSupSpace(10);

// Set whether to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width of the barcode
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"501234567890";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# EAN14 Barcode Generation
## Generate an EAN14 barcode with custom settings
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to EAN14
barCodeSetting->SetType(BarCodeType::EAN14);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Force enable checksum
barCodeSetting->SetUseChecksum(CheckSumMode::ForceEnable);

// Set whether the barcode has a border
barCodeSetting->SetHasBorder(true);

// Set the supplemental data
barCodeSetting->SetSupData(L"12345");

// Set the space between supplemental data
barCodeSetting->SetSupSpace(10);

// Set whether to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width of the barcode
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"501234567890";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire.barcode cpp ean8
## generate EAN8 barcode with custom settings
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to EAN8
barCodeSetting->SetType(BarCodeType::EAN8);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Force enable checksum
barCodeSetting->SetUseChecksum(CheckSumMode::ForceEnable);

// Set the supplemental data
barCodeSetting->SetSupData(L"67");

// Set the space between supplemental data
barCodeSetting->SetSupSpace(10);

// Show text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width of the barcode
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"2012345";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# Spire.Barcode C++ Interleaved25 Generation
## Generate an Interleaved 2 of 5 barcode with specific settings
```cpp
using namespace std;
using namespace Spire::Barcode;

int main()
{
    // Create a barcode settings object
    intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

    // Set the barcode type to Interleaved25
    barCodeSetting->SetType(BarCodeType::Interleaved25);

    // Set the background color to light gray
    barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

    // Force enable checksum
    barCodeSetting->SetUseChecksum(CheckSumMode::ForceEnable);

    // Set whether to display text at the bottom of the barcode
    barCodeSetting->SetShowTextOnBottom(true);

    // Set whether to show the checksum character
    barCodeSetting->SetShowCheckSumChar(true);

    // Set the border width of the barcode
    barCodeSetting->SetBorderWidth(50);

    // Set the height of the bars in the barcode
    barCodeSetting->SetBarHeight(20);

    // Set the data for the barcode generation
    std::wstring data = L"1234567890123";
    barCodeSetting->SetData(data.c_str());

    // Create a barcode generator object
    intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

    // Generate the barcode image
    std::vector<byte> barcodeimage = generator->GenerateImage();
}
```

---

# spire barcode cpp itf14
## generate ITF14 barcode
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to ITF14
barCodeSetting->SetType(BarCodeType::ITF14);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set whether to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width of the barcode
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"1540014128876";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire.barcode cpp itf6
## generate ITF6 linear barcode
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to ITF6
barCodeSetting->SetType(BarCodeType::ITF6);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set whether to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width of the barcode
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"123456";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire.barcode cpp msi
## generate MSI barcode
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to MSI
barCodeSetting->SetType(BarCodeType::MSI);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Force disable the use of checksum
barCodeSetting->SetUseChecksum(CheckSumMode::ForceDisable);

// Set whether to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"123456789";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# OPC Barcode Generation
## Creating and configuring an OPC barcode with custom settings
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to OPC
barCodeSetting->SetType(BarCodeType::OPC);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set whether to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"020711721";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire.barcode cpp planet
## Generate Planet barcode using Spire.Barcode library
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to Planet
barCodeSetting->SetType(BarCodeType::Planet);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set whether to force enable the use of checksum
barCodeSetting->SetUseChecksum(CheckSumMode::ForceEnable);

// Set whether to display the checksum character
barCodeSetting->SetShowCheckSumChar(true);

// Set whether to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"4012345235636";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire.barcode cpp postnet
## generate PostNet barcode with specific settings
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to PostNet
barCodeSetting->SetType(BarCodeType::PostNet);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set whether to force enable the use of checksum
barCodeSetting->SetUseChecksum(CheckSumMode::ForceEnable);

// Set whether to display the checksum character
barCodeSetting->SetShowCheckSumChar(true);

// Set whether to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"202609900";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire.barcode cpp pzn
## generate PZN barcode
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to PZN
barCodeSetting->SetType(BarCodeType::PZN);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set whether to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"123456";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# Spire.Barcode C++ RoyalMail4State Generation
## Generate RoyalMail4State barcode with specific settings
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to RoyalMail4State
barCodeSetting->SetType(BarCodeType::RoyalMail4State);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set whether to enable the use of checksum
barCodeSetting->SetUseChecksum(CheckSumMode::ForceEnable);

// Set whether to display the checksum character
barCodeSetting->SetShowCheckSumChar(true);

// Set whether to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"ABC123";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# Spire.Barcode C++ RSS14 Barcode Generation
## Generate RSS14 linear barcode with specific settings
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to RSS14
barCodeSetting->SetType(BarCodeType::RSS14);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set whether to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"0123456789";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire.barcode cpp rss14 truncated
## generate RSS14 Truncated barcode
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to RSS14Truncated
barCodeSetting->SetType(BarCodeType::RSS14Truncated);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set whether to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"0123456789";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire.barcode cpp generate
## RSS Expanded barcode generation
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to RSSExpanded
barCodeSetting->SetType(BarCodeType::RSSExpanded);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set whether to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"(01)1234567890123";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire barcode cpp rsslimited
## generate RSSLimited barcode
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to RSSLimited
barCodeSetting->SetType(BarCodeType::RSSLimited);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set whether to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"0123456789";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire.barcode cpp scc14
## generate SCC14 barcode with settings
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to SCC14
barCodeSetting->SetType(BarCodeType::SCC14);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Force enable checksum
barCodeSetting->SetUseChecksum(CheckSumMode::ForceEnable);

// Show the checksum character
barCodeSetting->SetShowCheckSumChar(true);

// Display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"011061414100041";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# Singapore Post 4-State Barcode Generation
## Generate Singapore Post 4-State barcode with custom settings
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to Singapore Post 4-State
barCodeSetting->SetType(BarCodeType::SingaporePost4State);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Disable the use of checksum
barCodeSetting->SetUseChecksum(CheckSumMode::ForceDisable);

// Display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"529508";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire.barcode cpp ssc18
## generate SSCC-18 barcode
```cpp
int main()
{
    // Create a barcode settings object
    intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

    // Set the barcode type to SSCC-18
    barCodeSetting->SetType(BarCodeType::SSCC18);

    // Set the background color to light gray
    barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

    // Enable the use of checksum
    barCodeSetting->SetUseChecksum(CheckSumMode::ForceEnable);

    // Show the checksum character
    barCodeSetting->SetShowCheckSumChar(true);

    // Display text at the bottom of the barcode
    barCodeSetting->SetShowTextOnBottom(true);

    // Set the border width
    barCodeSetting->SetBorderWidth(50);

    // Set the height of the bars in the barcode
    barCodeSetting->SetBarHeight(20);

    // Set the data for the barcode generation
    barCodeSetting->SetData(L"0000614141123456789");

    // Create a barcode generator object
    intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

    // Generate the barcode image
    std::vector<byte> barcodeimage = generator->GenerateImage();
}
```

---

# spire.barcode cpp swiss post parcel
## generate Swiss Post Parcel barcode
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to Swiss Post Parcel
barCodeSetting->SetType(BarCodeType::SwissPostParcel);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"993413796700168509";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire.barcode cpp upca
## generate UPCA barcode
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to UPCA
barCodeSetting->SetType(BarCodeType::UPCA);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Force enable checksum
barCodeSetting->SetUseChecksum(CheckSumMode::ForceEnable);

// Set the supplemental data
barCodeSetting->SetSupData(L"03");

// Set the space between supplemental data
barCodeSetting->SetSupSpace(3);

// Display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"01234567890";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire.barcode cpp upce
## generate UPCE barcode with custom settings
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to UPCE
barCodeSetting->SetType(BarCodeType::UPCE);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Force enable checksum
barCodeSetting->SetUseChecksum(CheckSumMode::ForceEnable);

// Set the supplemental data
barCodeSetting->SetSupData(L"03");

// Set the space between supplemental data
barCodeSetting->SetSupSpace(3);

// Display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"01234567890";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# USPS Barcode Generation
## Generate USPS linear barcode with custom settings
```cpp
// Create a barcode settings object
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to USPS
barCodeSetting->SetType(BarCodeType::USPS);

// Set the background color to light gray
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set to display text at the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the data for the barcode generation
std::wstring data = L"9002580053457430457568477";
barCodeSetting->SetData(data.c_str());

// Create a barcode generator object
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire barcode c++ qr code with logo
## generate QR code with logo image
```cpp
// Create a new instance of BarcodeSettings
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the type of the barcode to QRCode
barCodeSetting->SetType(BarCodeType::QRCode);

// Set the background color of the barcode to white smoke
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set the data mode of the QRCode to Byte
barCodeSetting->SetQRCodeDataMode(QRCodeDataMode::Byte);

// Set the error correction level of the QRCode to M
barCodeSetting->SetQRCodeECL(QRCodeECL::M);

// Set whether to show text on the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width of the barcode
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode
barCodeSetting->SetBarHeight(20);

// Set the X position of the barcode
barCodeSetting->SetX(5);

// Set the 2D data of the barcode
std::wstring data = L"ABC 123456789";
barCodeSetting->SetData2D(data.c_str());

// Set the data of the barcode
barCodeSetting->SetData(data.c_str());

// Set the logo image of the QRCode
barCodeSetting->SetQRCodeLogoImage(DATAPATH L"Logo.png");

// Create a new instance of BarCodeGenerator with the given barcode settings
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire.barcode cpp aztec
## generate Aztec barcode
```cpp
// Create a new instance of BarcodeSettings and assign it to barCodeSetting
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the background color of the barcode to white smoke
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set the type of the barcode to Aztec
barCodeSetting->SetType(BarCodeType::Aztec);

// Enable auto-resizing of the barcode
barCodeSetting->SetAutoResize(true);

// Show the checksum character in the barcode
barCodeSetting->SetShowCheckSumChar(true);

// Show text on the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the data for the 2D barcode
std::wstring data = L"ABC 123456789";
barCodeSetting->SetData2D(data.c_str());

// Create a new instance of BarCodeGenerator with the given barcode settings
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# DataMatrix Barcode Generation
## Core code for generating DataMatrix barcode using Spire.Barcode

// Create a new instance of BarcodeSettings and assign it to barCodeSetting
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the type of the barcode to DataMatrix
barCodeSetting->SetType(BarCodeType::DataMatrix);

// Set the background color of the barcode to white smoke
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set whether to show text on the bottom of the barcode
barCodeSetting->SetShowTextOnBottom(true);

// Set the data for the 2D barcode (necessary step)
// Note: Data must be set before generating the barcode
// barCodeSetting->SetData2D(data);

// Create a new instance of BarCodeGenerator with the given barcode settings
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image
std::vector<byte> barcodeimage = generator->GenerateImage();

---

# c++ pdf417 barcode generation
## generate a PDF417 barcode with specific settings
```cpp
// Create a new instance of BarcodeSettings and assign it to barCodeSetting
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the barcode type to Pdf417
barCodeSetting->SetType(BarCodeType::Pdf417);

// Set the background color to white smoke
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set the data mode for Pdf417 to Auto
barCodeSetting->SetPdf417DataMode(Pdf417DataMode::Auto);

// Set the error correction level for Pdf417 to Level 2
barCodeSetting->SetPdf417ECL(Pdf417ECL::Level2);

// Set the Pdf417 truncated property to true
barCodeSetting->SetPdf417Truncated(true);

// Set the X-Y ratio for the barcode to 5
barCodeSetting->SetXYRatio(5);

// Set the border width of the barcode to 100
barCodeSetting->SetBorderWidth(100);

// Set the height of the barcode bars to 100
barCodeSetting->SetBarHeight(100);

// Set the property to show text on the bottom of the barcode to true
barCodeSetting->SetShowTextOnBottom(true);

// Set the data for the 2D barcode to "123456789"
std::wstring data = L"123456789 ";
barCodeSetting->SetData2D(data.c_str());

// Create a new instance of BarCodeGenerator with the given barcode settings
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the barcode image using the generator
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire barcode cpp pdf417macro
## generate Pdf417Macro barcode with specific settings
```cpp
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
```

---

# spire barcode cpp qrcode generation
## generate QR code with specific settings
```cpp
// Create a new instance of BarcodeSettings and assign it to barCodeSetting
intrusive_ptr<BarcodeSettings> barCodeSetting = new BarcodeSettings();

// Set the type of the barcode to QRCode
barCodeSetting->SetType(BarCodeType::QRCode);

// Set the background color of the barcode to white smoke
barCodeSetting->SetBackColor(Color::GetWhiteSmoke());

// Set the data mode of the QRCode to alphanumeric
barCodeSetting->SetQRCodeDataMode(QRCodeDataMode::AlphaNumber);

// Set the error correction level of the QRCode to high
barCodeSetting->SetQRCodeECL(QRCodeECL::H);

// Set whether to show text on the bottom of the barcode to true
barCodeSetting->SetShowTextOnBottom(true);

// Set the border width of the barcode to 50
barCodeSetting->SetBorderWidth(50);

// Set the height of the bars in the barcode to 20
barCodeSetting->SetBarHeight(20);

// Set the data for the 2D barcode to "ABC 123456789"
std::wstring data = L"ABC 123456789";
barCodeSetting->SetData2D(data.c_str());

// Create a new instance of BarCodeGenerator with the given barcode settings
intrusive_ptr<BarCodeGenerator> generator = new BarCodeGenerator(barCodeSetting);

// Generate the image of the barcode
std::vector<byte> barcodeimage = generator->GenerateImage();
```

---

# spire barcode cpp scan
## scan barcode from file with checksum validation
```cpp
//Set the type and whether to include processing checkSum data
std::vector<LPCWSTR_S> s = BarcodeScanner::Scan(L"barcode.png", BarCodeType::QRCode, TRUE);

// Declare a wide string variable to store the text
wstring textStr;

// Check if the size of the input string is not zero
if (s.size() != 0)
{
    // Iterate through each character in the input string
    for (auto context : s)
    {
        // Append the current character to the text string
        textStr.append(context);
        // Append a newline character to the text string
        textStr.append(L"");
    }
}
else
{
    // If the input string is empty, append "null" and a newline character to the text string
    textStr.append(L"null");
    textStr.append(L"");
}
```

---

# spire.barcode cpp scan
## scan barcode file with specific barcode type
```cpp
// Set the type to scan
std::vector<LPCWSTR_S> s = BarcodeScanner::Scan(DATAPATH"barcode.png",BarCodeType::Code128);
```

---

# spire barcode cpp scan
## Scan barcode from image file with checksum verification
```cpp
// Set whether to include processing checkSum data
std::vector<LPCWSTR_S> s = BarcodeScanner::Scan(DATAPATH"barcode.png", TRUE);

// Declare a wide string variable to store the text
wstring textStr;

// Check if the size of the input string is not zero
if (s.size() != 0)
{
    // Iterate through each character in the input string
    for (auto context : s)
    {
        // Append the current character to the text string
        textStr.append(context);
        // Append a newline character to the text string
        textStr.append(L"");
    }
}
else
{
    // If the input string is empty, append "null" and a newline character to the text string
    textStr.append(L"null");
    textStr.append(L"");
}

// Clear the vector
s.clear();
```

---

# spire.barcode cpp scan
## scan barcode from image stream
```cpp
// Create a smart pointer pointing to a new Stream object for reading the input file
intrusive_ptr<Stream> imageStream = new Stream(DATAPATH L"barcode.png");

// Scan the image stream using the Scan method of Spire::Barcode::BarcodeScanner class, 
// and store the results in a vector of LPCWSTR_S type
std::vector<LPCWSTR_S> results = Spire::Barcode::BarcodeScanner::Scan(imageStream);
```

---

# spire.barcode cpp scan
## scan barcode from a single file
```cpp
int main()
{
	// Set the file path
	wstring input_path = DATAPATH;
	wstring output_path = OUTPUTPATH;
	wstring outputFile = output_path + L"out.txt";

	// Scan the code image
	std::wstring s = BarcodeScanner::ScanOne(DATAPATH"barcode.png");

	//clear the vector
	s.clear();
}
```

---

# spire.barcode cpp scan
## scan barcode from file with specific type and include checksum
```cpp
int main()
{
	// Set the barcode type and whether to include processing checksum data
	std::wstring s = BarcodeScanner::ScanOne(DATAPATH"barcode.png",BarCodeType::Code128,TRUE);

	// Clear the result
	s.clear();
}
```

---

# spire barcode cpp scan
## scan barcode file with checksum
```cpp
//Set whether to include processing checkSum data
std::wstring s = BarcodeScanner::ScanOne(DATAPATH"barcode.png",TRUE);
```

---

