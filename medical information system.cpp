#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
class patient{
	private:
		string name;
		int age;
		string gender;
		string medicalHistory;
		string contactInfo;
		
		public:
			patient(string name, int age, string gender, string contacInfo, string medicalHistory)
			:name(name),age(age), gender(gender), contactInfo(contactInfo), medicalHistory(medicalHistory) {}
			string getName() const {
			return name;
			}
			void displayDisplay() const {
			cout << "Name:" << name << endl;
			cout << "Age:" << age << endl;
			cout << "Gender:" << gender << endl;
			cout << "Contact info:" << contactInfo << endl;
			cout << "Medical History:" << medicalHistory << endl;
			
			
			}
			
	
	
	
	
	
	
	
	
};
class MedicalInformationSystem {
	private:
		vector<patient> patients;
		
		public:
			void addPatient(const patient& patient) {
				patients.push_back(patient);
				
			}
			void displayAllPatients() const {
				for (const auto& patient : patient){
					patient.displayDetails();
					cout << "-----------" << endl;
				}
			}
			
			
			
			
};


int main(){
	MedicalInformationSystem system;
	
	
	// Example usage 
	Patient patient1("John Doe", 35, "Male","john.doe@example.com", "None");
	Patient patient2("Jane Smith",28, "Female", "jane.smith@example.com","Asthma");
	system.addPatient(patient1);
	system.addPatient(patient2);
	
	system.displayAllPatients();
	
		return 0;
}
