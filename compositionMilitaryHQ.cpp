/////////////////////////  SYED FAISAL ABRAR ////////////   L1S21BSSE0100 ///////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////// Suppose, New Pak MiLlitary General Head Quarters Are Being Developed  //////////////

///////////////////////////////////// Management System For That ////////////////////////////////////

#include<iostream>
#include<string.h>
using namespace std;

///////////////////////////////////// COMPOSITION ////////////////////////////////////
class GeneralStaffBranch {
	//////////////  Directors
	char gsb1stDic[80];
	char gsb2ndDic[80];
	char gsb3rdDic[80];
	char gsb4thDic[80];
	char gsb5thDic[80];

public:
	GeneralStaffBranch() {
		strcpy_s(gsb1stDic, "");
		strcpy_s(gsb2ndDic, "");
		strcpy_s(gsb3rdDic, "");
		strcpy_s(gsb4thDic, "");
		strcpy_s(gsb5thDic, "");
	}

	GeneralStaffBranch(const char firstD[], const char secondD[], const char thirdD[], const char fourthD[], const char fifthD[]) {
		strcpy_s(gsb1stDic, firstD);
		strcpy_s(gsb2ndDic, secondD);
		strcpy_s(gsb3rdDic, thirdD);
		strcpy_s(gsb4thDic, fourthD);
		strcpy_s(gsb5thDic, fifthD);

		cout << " General Staff Branch Created -----------" << endl;
	}
	char* getFirstDic() { return gsb1stDic; }
	char* getSecondDic() { return gsb2ndDic; }
	char* getThirdDic() { return gsb3rdDic; }
	char* getFourthDic() { return gsb4thDic; }
	char* getFifthDic() { return gsb5thDic; }
};

///////////////////////////////////// COMPOSITION ////////////////////////////////////
class LogisticStaffBranch {
	//////////////  Directors
	char lsb1stDic[80];
	char lsb2ndDic[80];
	char lsb3rdDic[80];
	char lsb4thDic[80];
	char lsb5thDic[80];

public:
	LogisticStaffBranch() {
		strcpy_s(lsb1stDic, "");
		strcpy_s(lsb2ndDic, "");
		strcpy_s(lsb3rdDic, "");
		strcpy_s(lsb4thDic, "");
		strcpy_s(lsb5thDic, "");
	}

	LogisticStaffBranch(const char firstD[], const char secondD[], const char thirdD[], const char fourthD[], const char fifthD[])
	{
		strcpy_s(lsb1stDic, firstD);
		strcpy_s(lsb2ndDic, secondD);
		strcpy_s(lsb3rdDic, thirdD);
		strcpy_s(lsb4thDic, fourthD);
		strcpy_s(lsb5thDic, fifthD);
		cout << " Logistic Staff Branch Created -----------" << endl;
	}
	char* getFirstDic() { return lsb1stDic; }
	char* getSecondDic() { return lsb2ndDic; }
	char* getThirdDic() { return lsb3rdDic; }
	char* getFourthDic() { return lsb4thDic; }
	char* getFifthDic() { return lsb5thDic; }
};


///////////////////////////////////// COMPOSITION ////////////////////////////////////
class ArmsBranch {
	//////////////  Directors
	char ab1stDic[80];
	char ab2ndDic[80];
	char ab3rdDic[80];
	char ab4thDic[80];
	char ab5thDic[80];
	char ab6thDic[80];

public:
	ArmsBranch() {
	
		strcpy_s(ab1stDic, "");
		strcpy_s(ab2ndDic, "");
		strcpy_s(ab3rdDic, "");
		strcpy_s(ab4thDic, "");
		strcpy_s(ab5thDic, "");
		strcpy_s(ab6thDic, "");
	}

	ArmsBranch(const char firstD[], const char secondD[], const char thirdD[], const char fourthD[], const char fifthD[],
		const char sixthD[])
	{
		strcpy_s(ab1stDic, firstD);
		strcpy_s(ab2ndDic, secondD);
		strcpy_s(ab3rdDic, thirdD);
		strcpy_s(ab4thDic, fourthD);
		strcpy_s(ab5thDic, fifthD);
		strcpy_s(ab6thDic, sixthD);
		cout << " Arms Branch Created -----------" << endl;
	}
	char* getFirstDic() { return ab1stDic; }
	char* getSecondDic() { return ab2ndDic; }
	char* getThirdDic() { return ab3rdDic; }
	char* getFourthDic() { return ab4thDic; }
	char* getFifthDic() { return ab5thDic; }
	char* getSixthDic() { return ab6thDic; }
};


///////////////////////////////////// COMPOSITION ////////////////////////////////////
class AdjutantGeneralBranch {

	//////////////  Directors
	char agb1stDic[80];
	char agb2ndDic[80];
	char agb3rdDic[80];
	char agb4thDic[80];
	char agb5thDic[80];
	char agb6thDic[80];

public:
	AdjutantGeneralBranch() {
		strcpy_s(agb1stDic, "");
		strcpy_s(agb2ndDic, "");
		strcpy_s(agb3rdDic, "");
		strcpy_s(agb4thDic, "");
		strcpy_s(agb5thDic, "");
		strcpy_s(agb6thDic, "");
	}
	AdjutantGeneralBranch(const char firstD[], const char secondD[], const char thirdD[], const char fourthD[], const char fifthD[],
		const char sixthD[])
	{
		strcpy_s(agb1stDic, firstD);
		strcpy_s(agb2ndDic, secondD);
		strcpy_s(agb3rdDic, thirdD);
		strcpy_s(agb4thDic, fourthD);
		strcpy_s(agb5thDic, fifthD);
		strcpy_s(agb6thDic, sixthD);
		cout << " Ajustant General Branch Created -----------" << endl;
	}
	char* getFirstDic() { return agb1stDic; }
	char* getSecondDic() { return agb2ndDic; }
	char* getThirdDic() { return agb3rdDic; }
	char* getFourthDic() { return agb4thDic; }
	char* getFifthDic() { return agb5thDic; }
	char* getSixthDic() { return agb6thDic; }

};

///////////////////////////////////// COMPOSITION ////////////////////////////////////
class MilitarySecretaryBranch {

public:
	MilitarySecretaryBranch() {
		cout << " Military Secretary Branch Created -----------" << endl;
	};

};

///////////////////////////////////// COMPOSITION ////////////////////////////////////
class TrainingandEvaluationBranch {
	//////////////  Directors
	char teb1stDic[80];
	char teb2ndDic[80];
	char teb3rdDic[80];
	char teb4thDic[80];
	char teb5thDic[80];
	

public:
	TrainingandEvaluationBranch() {
	
		strcpy_s(teb1stDic, "");
		strcpy_s(teb2ndDic, "");
		strcpy_s(teb3rdDic, "");
		strcpy_s(teb4thDic, "");
		strcpy_s(teb5thDic, "");
	};
	TrainingandEvaluationBranch(const char firstD[], const char secondD[], const char thirdD[], const char fourthD[], const char fifthD[])
	{
		strcpy_s(teb1stDic, firstD);
		strcpy_s(teb2ndDic, secondD);
		strcpy_s(teb3rdDic, thirdD);
		strcpy_s(teb4thDic, fourthD);
		strcpy_s(teb5thDic, fifthD);
		cout << " Training and Evaluation Branch Created -----------" << endl;
	}

	char* getFirstDic() { return teb1stDic; }
	char* getSecondDic() { return teb2ndDic; }
	char* getThirdDic() { return teb3rdDic; }
	char* getFourthDic() { return teb4thDic; }
	char* getFifthDic() { return teb5thDic; }
	
};

///////////////////////////////////// COMPOSITION ////////////////////////////////////
class QuarterMasterGeneralBranch {
	//////////////  Directors
	char qmgb1stDic[80];
	char qmgb2ndDic[80];
	char qmgb3rdDic[80];
	

public:
	QuarterMasterGeneralBranch() {
	
		strcpy_s(qmgb1stDic, "");
		strcpy_s(qmgb2ndDic, "");
		strcpy_s(qmgb3rdDic, "");
	}
	QuarterMasterGeneralBranch(const char firstD[], const char secondD[], const char thirdD[], const char fourthD[], const char fifthD[])
	{
		strcpy_s(qmgb1stDic, firstD);
		strcpy_s(qmgb2ndDic, secondD);
		strcpy_s(qmgb3rdDic, thirdD);
		cout << " Quarter Master General Branch Created -----------" << endl;
	}
	char* getFirstDic() { return qmgb1stDic; }
	char* getSecondDic() { return qmgb2ndDic; }
	char* getThirdDic() { return qmgb3rdDic; }
	
};

///////////////////////////////////// COMPOSITION ////////////////////////////////////
class EngineerInChiefBranch {

	//////////////  Directors
	char eicb1stDic[80];
	char eicb2ndDic[80];
public:

	EngineerInChiefBranch() {
		strcpy_s(eicb1stDic, "");
		strcpy_s(eicb2ndDic, "");
	};
	EngineerInChiefBranch(const char firstD[], const char secondD[])
	{
		strcpy_s(eicb1stDic, firstD);
		strcpy_s(eicb2ndDic, secondD);
		cout << " Engineer In Chief Branch Created -----------" << endl;
	}
	char* getFirstDic() { return eicb1stDic; }
	char* getSecondDic() { return eicb2ndDic; }
	
};

///////////////////////////////////// COMPOSITION ////////////////////////////////////
class CommunicationandInformationTechnologyBranch {

public:
	CommunicationandInformationTechnologyBranch() {
		cout << " Communicationand In formation Technology Branch Created -----------" << endl;
	}
};


///////////////////////////////////// COMPOSITION ////////////////////////////////////
class SurgeonGeneralBranch {
	//////////////  Director
	char sgb1stDic[80];
public:
	SurgeonGeneralBranch() {
		strcpy_s(sgb1stDic, "");
	}
	SurgeonGeneralBranch(const char firstD[])
	{
		strcpy_s(sgb1stDic, firstD);
		cout << " Surgeon General Branch Created -----------" << endl;
	}
	char* getFirstDic() { return sgb1stDic; }

};

///////////////////////////////////// ASSOSIATION ////////////////////////////////////
class SportsComplex {

public:
	SportsComplex() {
		cout << " Sports Complex Created In GHQ-------------" << endl<<endl;
	}
};


///////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////// Whole  Class ///////////////////////////////////////

class GeneralHeadQuarter {

	GeneralStaffBranch gsb;
	LogisticStaffBranch lsb;
	ArmsBranch ab;
	AdjutantGeneralBranch agb;
	MilitarySecretaryBranch mcb;
	TrainingandEvaluationBranch teb;
	QuarterMasterGeneralBranch qmgb;
	EngineerInChiefBranch eicb;
	CommunicationandInformationTechnologyBranch citb;
	SurgeonGeneralBranch sgb;
	SportsComplex *sports;

	char location[50];
	double landInAcers;
	int numberOfBranches;
	char commandedBy[30];
	int totalDirectorates;
	char directoratesHeadedBy[30];

public:

	GeneralHeadQuarter() {}
	GeneralHeadQuarter(const char location[], int landAcers, int noOfBranchs, const char commBy[], int tDirectorates, const char dheadedBy[],
		const char gsb1stDic[], const  char gsb2ndDic[], const  char gsb3rdDic[], const char gsb4thDic[], const  char gsb5thDic[],
		const  char lsb1stDic[], const  char lsb2ndDic[], const  char lsb3rdDic[], const  char lsb4thDic[], const char lsb5thDic[],
		const char ab1stDic[], const char ab2ndDic[], const char ab3rdDic[], const  char ab4thDic[], const  char ab5thDic[],
		const char ab6thDic[], const char agb1stDic[], const char agb2ndDic[], const  char agb3rdDic[], const  char agb4thDic[],
		const char agb5thDic[], const char agb6thDic[], const char teb1stDic[], const  char teb2ndDic[], const  char teb3rdDic[],
		const  char teb4thDic[], const  char teb5thDic[], const  char qmgb1stDic[], const  char qmgb2ndDic[], const  char qmgb3rdDic[],
		const  char eicb1stDic[], const  char eicb2ndDic[], const char sgb1stDic[]) :
		gsb(gsb1stDic, gsb2ndDic, gsb3rdDic, gsb4thDic, gsb5thDic),
		lsb(lsb1stDic, lsb2ndDic, lsb3rdDic, lsb4thDic, lsb5thDic),
		ab(ab1stDic, ab2ndDic, ab3rdDic, ab4thDic, ab5thDic, ab6thDic),
		agb(agb1stDic, agb2ndDic, agb3rdDic, agb4thDic, agb5thDic, agb6thDic),
		teb(teb1stDic, teb2ndDic, teb3rdDic, teb4thDic, teb5thDic),
		eicb(eicb1stDic, eicb2ndDic),
		sgb(sgb1stDic)

		{
			strcpy_s(this->location, location);
			numberOfBranches = noOfBranchs;
			landInAcers = landAcers;
			strcpy_s(commandedBy, commBy);
			totalDirectorates = tDirectorates;
			strcpy_s(directoratesHeadedBy, dheadedBy);
			if (getLandInAcers() > 950) {
				sports = new SportsComplex();
				cout << " -----General Head Quarter Created With Sport Complex ---------------------" << endl<<endl;
			}
			else
				cout << " ----General Head Quarter Created With Out Sport Complex ---------------------" << endl<<endl;
}

	///////////////////////////// Getters
	char* getLocation() { return location; }
	int getLandInAcers() { return landInAcers; }
	int getNoOfBranches() { return numberOfBranches;  }
	char* getHqCommander() { return commandedBy; }
	int getTotalDirectorates() { return totalDirectorates; }
	char* getDirectorateCommander() { return directoratesHeadedBy; }

	void introGHQ() {
		cout <<endl<< " General Headquarters is the command center of land forces of Pakistan. Located in " <<getLocation()<<"." << endl <<
			" Area Allocated For New GHQ is "<<getLandInAcers()<<" acers."<<
			" In GHQ, there are "<<getNoOfBranches()<< " branches commanded by "<<getHqCommander()<<"  ranked officer, and "<<endl<<
			getTotalDirectorates()<<" directorates commanded by a "<<getDirectorateCommander()<<"  ranked officer." << endl;
	}


	void showBranchesOfGHQ() {

		cout <<endl<<endl<< "------------------------------------There are Total Brances In GHQ --------------------------------- " << endl <<
			"                                                                                                           " << endl <<
			"1. General Staff, (GS) branch: " << endl << "    " << gsb.getFirstDic() << endl << "    " << gsb.getSecondDic() << endl << "    " << gsb.getThirdDic()
			<< endl << "    " << gsb.getFourthDic() << endl << "    " << gsb.getFifthDic() << endl <<
			"2. Logistic Staff, (LS) branch: " << endl << "    " << lsb.getFirstDic() << endl << "    " << lsb.getSecondDic() << endl << "    " << lsb.getThirdDic()
			<< endl << "    " << lsb.getFourthDic() << endl << "    " << lsb.getFifthDic() << endl <<
			"3. Arms branch: " << endl << "    " << ab.getFirstDic() << endl << "    " << ab.getSecondDic() << endl << "    " << ab.getThirdDic()
			<< endl << "    " << ab.getFourthDic() << endl << "    " << ab.getFifthDic() << endl << "    " << ab.getSixthDic() <<endl<<
			"4. Adjutant General, (AG) branch: " << endl << "    " << agb.getFirstDic() << endl << "    " << agb.getSecondDic() << endl << "    " << agb.getThirdDic()
			<< endl << "    " << agb.getFourthDic() << endl << "    " << agb.getFifthDic() << endl << "    " << agb.getSixthDic() <<endl<<
			"5. Military Secretary, (MS) branch: " << endl <<
			"6. Training and Evaluation, (T&E) branch: " << endl << "    " << teb.getFirstDic() << endl << "    " << teb.getSecondDic() << endl << "    " << teb.getThirdDic()
			<< endl << "    " << teb.getFourthDic() << endl << "    " << teb.getFifthDic() << endl <<
			"7. Quarter Master General (QMG) Branch: " << endl << "    " << qmgb.getFirstDic() << endl << "    " << qmgb.getSecondDic() << endl << "    " << qmgb.getThirdDic()
			<< endl <<
			"8. Engineer-in-Chief (E-in-C) Branch: " << endl << "    " << eicb.getFirstDic() << endl << "    " << eicb.getSecondDic() << endl <<
			"9. Communication and Information Technology (C&IT) branch: " << endl <<
			"10. Surgeon General, (SG) branch: " << endl << "    " << sgb.getFirstDic() << endl;
			
	}
};


//////////////////////////////////////////////////// Main /////////////////////////////////////////
int main() {

	GeneralHeadQuarter newHQ("RawalPindi, Punjab",1000, 10, "Lt. General",40, "Major General",
		"Military Operations, MO Directorate", "Military Intelligence, MI Directorate", 
		"Organisation and Methods, O&M Directorate", "Inspection and Technical Development, I&TD Directorate",
		"Weapons and Equipment, W&E Directorate", "Logistics Directorate", "Supply and Transport, S&T Directorate",
		"Budget Directorate", "Ordinance Services, OS Directorate", "Electrical and Mechanical Engineering (EME)Directorate",
		"Director General, DG Infantry", "Director General, DG Armoured Corps", "Director General, DG Artillery",
		"Director General, DG Army Air Defence", "Director General, DG Engineers", "Director General, DG Army Aviation",
		"Law Directorate", "Welfare and Rehabilitation, W&R Directorate", "Pay, Pension and Accounts, PP&A Directorate",
		"Housing Directorate", "Personal Service, PS Directorate", "Provost Marshal, PM Directorate", "Personal Administration, PA Directorate",
		"Military Training, MT Directorate", "Human Resource Development, HRD Directorate", "Doctrine and Evaluation, D&E Directorate",
		"Army Sports Directorate (AS Dte)", "Quartering and Lands, Q&L Directorate",
		"Military Lands and Cantonment (Ml&c) Directorate", "Remount, Veterinary, and Farms Corps Directorate",
		"(C4I) Directorate","Signals Directorate", "Medical Directorate");

	newHQ.introGHQ();

	newHQ.showBranchesOfGHQ();
	return 0;
}