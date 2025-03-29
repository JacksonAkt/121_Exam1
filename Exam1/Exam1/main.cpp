//Exam #1 Periodic Table 

#include<iostream>
#include<iomanip>
#include<cctype>
#include "input.h"
using namespace std;

//void advancedBinaryFile();
//void dynamicArray();
//void vector();
//void xtraCredit();





int main()
{
    int j = 0;
    do
    {
        system("cls");


        //Space for Periodic Table

        cout << "\n\t" << char(201);
        while (j < 160)
        {
            cout << char(205);
            j++;
        }
        cout << char(187);
        cout << "\n\t" << char(186) << "                                       Periodic Table of Elements by Atomic Number & Symbol(colors 5 pts Xtra credits)                                          " << char(186);
        cout << "\n\t" << char(186) << "       [  1-H ]                                                                                                                                  [  2-He]       " << char(186);
        cout << "\n\t" << char(186) << "       [  3-Li][  4-Be]                                                                                  [  5-B ][  6-C ][  7-N ][  8-O ][  9-F ][ 10-Ne]       " << char(186);
        cout << "\n\t" << char(186) << "       [ 11-Na][ 12-Mg]                                                                                  [ 13-Al][ 14-Si][ 15-P ][ 16-S ][ 17-Cl][ 18-Ar]       " << char(186);
        cout << "\n\t" << char(186) << "       [ 19-K ][ 20-Ca][ 21-Sc]  [ 22-Ti][ 23-V ][ 24-Cr][ 25-Mn][ 26-Fe][ 27-Co][ 28-Ni][ 29-Cu][ 30-Zn][ 31-Ga][ 32-Ge][ 33-As][ 34-Se][ 35-Br][ 36-Kr]       " << char(186);
        cout << "\n\t" << char(186) << "       [ 37-Rb][ 38-Sr][ 39-Y ]  [ 40-Zr][ 41-Nb][ 42-Mo][ 43-Tc][ 44-Ru][ 45-Rh][ 46-Pd][ 47-Ag][ 48-Cd][ 49-In][ 50-Sn][ 51-Sb][ 52-Te][ 53-I ][ 54-Xe]       " << char(186);
        cout << "\n\t" << char(186) << "       [ 55-Cs][ 56-Ba][ 57-La]"<< char(196) << char(191) <<"[ 72-Hf][ 73-Ta][ 74-W ][ 75-Re][ 76-Os][ 77-Ir][ 78-Pt][ 79-Au][ 80-Hg][ 81-Tl][ 82-Pb][ 83-Bi][ 84-Po][ 85-At][ 86-Rn]       " << char(186);
        cout << "\n\t" << char(186) << "       [ 87-Fr][ 88-Ra][ 89-Ac]" << char(191) << char(179) << "[104-Rf][105-Db][106-Sg][107-Bh][108-Hs][109-Mt][110-Ds][111-Rg][112-Cn][113-Nh][114-Fl][115-Mc][116-Lv][117-Ts][118-Og]       " << char(186);
        cout << "\n\t" << char(186) << "                               " << char(179) << char(179) <<"                                                                                                                               " << char(186);
        cout << "\n\t" << char(186) << "                               " << char(179) << char(192) << "[ 58-Ce][ 59-Pr][ 60-Nd][ 61-Pm][ 62-Sm][ 63-Eu][ 64-Gd][ 65-Tb][ 66-Dy][ 67-Ho][ 68-Er][ 69-Tm][ 70-Yb][ 71-Lu]               " << char(186);
        cout << "\n\t" << char(186) << "                               " << char(192) << "[ 90-Th][ 91-Pa][ 92-U ][ 93-Np][ 94-Pu][ 95-Am][ 96-Cm][ 97-Bk][ 98-Cf][ 99-Es][100-Fm][101-Md][102-No][103-Lr]                " << char(186);
        cout << "\n\t" << char(200);
        
        j = 0;
        while (j < 160)
        {
            cout << char(205);
            j++;
        }
        cout << char(188);

        cout << "\n\n\t" << string(162, char(205));
        cout << "\n\tCMPR121:  Exam#1: Implementation using  Dynamic Array, string/C-string, struct, and Binary File (3-19-2025) ";
        cout << "\n\t" << string(162, char(205));
        cout << "\n\t A) Advance Binary Data File (Chapter#12)";
        cout << "\n\t B) Dynamic Array (Chapter#9)";
        cout << "\n\t C) Vector (Chapter#7)";
        cout << "\n\t X) Xtra credits (5 pts)";
        cout << "\n\t" << string(162, char(196));
        cout << "\n\t Q) Quit";
        cout << "\n\t" << string(162, char(205));

        switch (inputInteger("\n\tOption: ", 0, 20))
        {
        case 'Q': exit(0);
        case 'A': advancedBinaryFile(); 
        //  break;
        //case 'B': dynamicArray(); 
        //  break;
        //case 'C': vector(); 
        //  break;
        //case 'X': xtraCredit(); 
        //  break;
        }

        cout << "\n\n";
        system("pause");
    } while (true);

    return 0;

}
/* advancedBinaryFile(); 
//you should be able to declare PrintBlockType(), PrintTemperature(), and PrintPhase() on yourself they are very basic
//change all the dereference style from a->b to (*a).b, they are the same, we have better not to have identical code
// treat a,b as variables, I replaced my range with them, choose your own range to put in. 
// change the codes as much as possible to your own style, 
//All the struct members you see below were used in my code, I do not see your struct here so change them into your style, too
//DO NOT use the variables I used, change them all into your own style, for example, create new names for molecule, filename, atom, NewElement, OriginalElement 

void PrintElement(Element* molecule)
{
	cout << setw(17) << left << "\n\tAtomic #" << ": " << (*molecule).AtomicNumber; //example
	cout << setw(17) << left << "\n\tSymbol" << ": " << molecule->Symbol; //change to (*molecule).Symbol, same for all the other
	cout << setw(17) << left << "\n\tName" << ": " << molecule->Name;
	cout << setw(17) << left << "\n\tMass" << ": " << molecule->Mass;
	cout << setw(17) << left << "\n\tState type" << ": ";
	PrintPhase(molecule->StateType);
	cout << setw(17) << left << "\n\tGroup #" << ": " << molecule->GroupNumber;
	cout << setw(17) << left << "\n\tPeriod #" << ": " << molecule->PeriodNumber;
	cout << setw(17) << left << "\n\tBlock type" << ": ";
	PrintBlocktype(molecule->BlockType);
	cout << setw(17) << left << "\n\tMelting Point" << ": ";
	PrintTemperature(molecule->MeltPoint);
	cout << setw(17) << left << "\n\tBoiling Point" << ": ";
	PrintTemperature(molecule->BoilPoint);
	cout << setw(17) << left << "\n\tDiscovery year" << ": " << molecule->DiscoveryYear;
	cout << setw(17) << left << "\n\tDiscovered by" << ": " << molecule->Discoverer;
	cout << "\n";
}

void DisplayElement(Element* molecule)
{
	system("cls");

	string filename;
	filename = inputString("\n\tSpecify a valid binary data file name to retrieve data from: ", false);
	ifstream chemistry;
    chemistry.open(filename, ios::binary | ios::in);

	if (chemistry.fail()) {
		cout << "\n\tERROR: File, " << filename << ", cannot be found";
		return; 
	}

	chemistry.read(reinterpret_cast<char*>(molecule), sizeof(Element));
	int i = 0;
	while (!chemistry.eof()) {
		PrintElement(molecule);
		i++;
		chemistry.read(reinterpret_cast<char*>(molecule), sizeof(Element));
	}
	cout << "\n\tCONFIRMATION: " << i << " record(s) found";
	chemistry.close();
}

void EnterElement(Element* molecule) 
{
	molecule->AtomicNumber = inputInteger("\n\n\tSpecify the Atomic # : ", a,b);
	strncpy_s(molecule->Symbol, inputString("\tSpecify the Element Symbol    : ", false).c_str(), sizeof(molecule->Symbol) - 1);
	strncpy_s(molecule->Name, inputString("\tSpecify the Element Name      : ", false).c_str(), sizeof(molecule->Name) - 1);
	molecule->Mass = inputDouble("\tSpecify the Element Mass      : ", a,b);
	molecule->StateType = inputChar("\tSpecify the Element State type (S-solid, L-liquid, G-gas, ot U-unknown) : ", static_cast<string>("SLGU"));
	molecule->GroupNumber = inputInteger("\tSpecify the Element Group # (0-unknown or 1...18) : ", a,b);
	molecule->PeriodNumber = inputInteger("\tSpecify the Element Period # (0-unknown or 1...7) : ", a,b);
	molecule->BlockType = inputChar("\tSpecify the Element Block type (S-sharp, P-principal, D-diffuse, ot F-fundamental) : ", static_cast<string>("SPDF"));
	molecule->MeltPoint = inputDouble("\tSpecify the Element Melting Point (celsius degree) : ", a,b );
	molecule->BoilPoint = inputDouble("\tSpecify the Element Boiling Point (celsius degree) : ", a,b );
	molecule->DiscoveryYear = inputInteger("\tSpecify the Element Discovery Year : ", a, b);
	strncpy_s(molecule->Discoverer, inputString("\tSpecify the Element Discovered By  : ", true).c_str(), sizeof(molecule->Discoverer) - 1);
}

void AddElement(string filename, Element* molecule)
{   
	system("cls");

	ofstream chemistry;
    chemistry.open(filename, ios::binary | ios::app);

	cout << "\n\tDirectly add an element into the binary file...";
	cout << "\n\n\tAdding a new element information...";

	EnterElement(molecule);

	chemistry.write(reinterpret_cast<char*>(molecule), sizeof(Element));
	cout << "\n\tCONFIRMATION: A new element with Atomic # (" << molecule->AtomicNumber << ") has been added/appended into the binary data file, test.dat";

	chemistry.close();
}

void ChangeElement(Element* molecule, int number)
{   
	Element NewElement; 
	Element OriginalElement = *molecule;
	NewElement.AtomicNumber = number;

	do {
		system("cls");

		PrintElement(&NewElement);

		cout << "\n\n\tUpdating Element's information...";
		cout << "\n\t" << string(80, char(205));
		cout << "\n\t1) Symbol";
		cout << "\n\t2) Name";
		cout << "\n\t3) Atomic Mass";
		cout << "\n\t4) State Type";
		cout << "\n\t5) Group #";
		cout << "\n\t6) Block Type";
		cout << "\n\t7) Period Type";
		cout << "\n\t8) Melting Point";
		cout << "\n\t9) Boilding Point";
		cout << "\n\t10) Discovered Year";
		cout << "\n\t11) Discovered By";
		cout << "\n\t" << string(80, char(196));
		cout << "\n\t-1) Return WITHOUT change(s)";
		cout << "\n\t0) Return WITH comminted change(s)";
		cout << "\n\t" << string(80, char(205));

		switch (inputInteger("\n\tOption: ", -1, 11))
		{
		case -1:
			molecule = &OriginalElement;
			cout << "\n\tWARNING: No update was commited.";
			return;
		case 0:
			cout << "\n\tCONFIRMATION: Element with Atomic # (" << number << ") has been updated into the binary file, test.dat.";
			return;
		case 1:
			strncpy_s(molecule->Symbol, inputString("\tSpecify a new Element Symbol : ", false).c_str(), sizeof(molecule->Symbol) - 1);
			strncpy_s(NewElement.Symbol, molecule->Symbol, sizeof(NewElement.Symbol) - 1);
			break;
		case 2:
			strncpy_s(molecule->Name, inputString("\tSpecify a new Element Name : ", false).c_str(), sizeof(molecule->Name) - 1);
			strncpy_s(NewElement.Name, molecule->Name, sizeof(NewElement.Name) - 1);
			break;
		case 3:
			molecule->Mass = inputDouble("\tSpecify a new Element Mass : ", a,b);
			NewElement.Mass = molecule->Mass;
			break;
		case 4:
			molecule->StateType = inputChar("\tSpecify a new Element State type (S-solid, L-liquid, G-gas, or U-unknown) : ", static_cast<string>("SLGU"));
			NewElement.StateType = molecule->StateType;
			break;
		case 5:
			molecule->GroupNumber = inputInteger("\tSpecify a new Element Group # (0-unknown or 1...18) : ", a,b);
			NewElement.GroupNumber = molecule->GroupNumber;
			break;
		case 6:
			molecule->BlockType = inputChar("\tSpecify a new Element Block type (S-sharp, P-principal, D-diffuse, or F-fundamental) : ", static_cast<string>("SPDF"));
			NewElement.BlockType = molecule->BlockType;
			break;
		case 7:
			molecule->PeriodNumber = inputInteger("\tSpecify a new Element Period # (0-unknown or 1...7) : ", a,b);
			NewElement.PeriodNumber = molecule->PeriodNumber;
			break;
		case 8:
			molecule->MeltPoint = inputDouble("\tSpecify a new Element Melting Point (celsius degree) : ",a,b);
			NewElement.MeltPoint = molecule->MeltPoint;
			break;
		case 9:
			molecule->BoilPoint = inputDouble("\tSpecify a new Element Boiling Point (celsius degree) : "a,b);
			NewElement.BoilPoint = molecule->BoilPoint;
			break;
		case 10:
			molecule->DiscoveryYear = inputInteger("\tSpecify a new Element Discovery Year : ", a,b);
			NewElement.DiscoveryYear = molecule->DiscoveryYear;
			break;
		case 11:
			strncpy_s(molecule->Discoverer, inputString("\tSpecify a new Element Discovered By  : ", true).c_str(), sizeof(molecule->Discoverer) - 1);
			strncpy_s(NewElement.Discoverer, molecule->Discoverer, sizeof(NewElement.Discoverer) - 1);
			break;
		}
	} while (true);
	
}

void UpdateElement(string filename, Element* molecule)
{   
	system("cls");

	fstream file(filename, ios::binary | ios::in | ios::out);
	bool found = false;

	cout << "\n\tUpdating an element in the binary data file...";
	int Order = inputInteger("\n\n\tSpecify the Element Atomic # to be updated : ", a,b);

	while (!file.eof())
	{
		file.read(reinterpret_cast<char*>(molecule), sizeof(Element));
		if (molecule->AtomicNumber == Order) {
			found = true;
			break;
		}
	}

	if (!found) {
		cout << "\n\tERROR: Cannot update the Element with Atomic # (" << Order << ") that does not exist. Please perform a valid option.";
	}
	else {
		system("cls");
		ChangeElement(molecule, Order);

		file.seekp(-static_cast<long>(sizeof(Element)), ios::cur);
		file.write(reinterpret_cast<char*>(molecule), sizeof(Element));
	}

	file.close();
}

void SearchElement(string filename, Element* molecule)
{
	system("cls");

	ifstream file;
    file.open(filename, ios::binary | ios::in );
	bool found = false;
	int location = 0; 

	if (!file) {
		cout << "ERROR: File, " << filename << " cannot be found.";
		return; 
	}

	cout << "\n\tSearching an element located in the binary file...";
	int AtomicSearch = inputInteger("\n\n\tSpecify the Element Atomic # to be searched: ", a,b);

	while (!file.eof())
	{
		file.read(reinterpret_cast<char*>(molecule), sizeof(Element));
		if (molecule->AtomicNumber == AtomicSearch) {
			found = true;
			break;
		}
		location++;
	}
	if (!found) { cout << "\n\tERROR: Cannot find the Element with Atomic # (" << AtomicSearch << "). Please perform a valid option."; }
	else {
		cout << "\n\tCONFIRMATION: The Element with Atomic # (" << AtomicSearch << ") is found at location " << location;
	}

	file.close();
}
void AdvancedBinaryDataFile() 
{
	Element atom; //DO NOT use "atom" as variable in your code 
	do {
		system("cls");

		cout << "\n\tOption A: Advanced Binary File Menu";
		cout << "\n\t" << string(80, char(205));
		cout << "\n\t1) Retrieve and display ALL element(s) from a binary data file";
		cout << "\n\t2) Add a new element to the binary data file";
		cout << "\n\t3) Update an existing element from the binary data file";
		cout << "\n\t4) Search for an element by atomic # from the binary data file.";
		cout << "\n\t" << string(80, char(196));
		cout << "\n\t0) Return to main menu";
		cout << "\n\t" << string(80, char(205));

		switch (inputInteger("\n\tOption: ", 0, 4)) 
		{
		case 0: return;
		case 1:
		  DisplayElement(&atom);
		  break;
		case 2:
		  AddElement("test.dat", &atom);
		  break;
		case 3: 
		  UpdateElement("test.dat" ,&atom);
		  break;
		case 4: 
		  SearchElement("test.dat", &atom);
		  break;
		}

		cout << "\n\n";
		system("pause");

	} while (true);
} 

*/  
    
    
    
    
    
    
    









void advancedBinaryFile()
{
    do 
    {

        system("cls");
    } while (true);
}
