/**
*	Made by Jazy Llerena
**/
#include <stdio.h>
#include <string.h>

struct Person {
	char fname[80];
	char lname[80];
	char number[10];
	char email[80];
};

void displayPersons(struct Person *people, int size);
//Display all the Person pointed by *people of size long
int addPerson(struct Person *adbook, int *size);
//Add a person to the end of the *adbook

int main() {
	const int SIZE = 100;
	int amount = 0; //Will keep count of the number of people in the array
	struct Person addressbook[SIZE];
	int input = 0;
	while (input != 3) {
		printf("1. Display the current people in the address book\n"
			"2. Add a new person to the address book\n"
			"3. Quit the program\n:");
		scanf("%d", &input);
		if (input == 1) {
			displayPersons(addressbook, amount);
		} else if (input == 2) {
			addPerson(addressbook, &amount);
		}
		printf("\n");
	}
	return 0;
}

void displayPersons(struct Person *people, int size) {
	printf("Address book:\n");
	int i;
	for (i = 0; i < size; i++) {
		printf("%d.\t%s\n\t%s\n\t%s\n\t%s\n", i, people[i].fname, 
		people[i].lname, people[i].number, people[i].email);
	}
	printf("\n");
}

int addPerson(struct Person *adbook, int *size) {
	if (*size > 100)
		return 1; //The array is full
	int i = *size; //Create at the last spot in the array
	int error = 0;
	char input[80];
	struct Person p;
	printf("Enter the first name of the person: ");
	scanf("%80s", p.fname);
	memset(input, '\0', sizeof(input));

	printf("Enter the last name of the person: ");
	scanf("%80s", p.lname);
	memset(input, '\0', sizeof(input));

	printf("Enter the number of the person: ");
	scanf("%10s", p.number);
	memset(input, '\0', sizeof(input));

	printf("Enter the email of the perosn: ");
	scanf("%80s", p.email);
	memset(input, '\0', sizeof(input));
	
	adbook[i] = p;
	*size = *size + 1; //Increment the counter for the items in the array
	//memset(input, '\0', sizeof(input))
	return 0;
}

