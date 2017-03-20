#include <cstdlib>
#include <cstdio>
#include <cstring>

#include "types.h"

// PhoneNo------------------------------
PhoneNo::PhoneNo(char* stringNum) {
   char countryCode[4];
   strcpy(countryCode, strtok(stringNum, "-"));
   char phoneNumber[11];
   strcpy(phoneNumber, strtok(NULL, "-"));
   this->countryCode = atoi(countryCode);
   this->phoneNumber = atoi(phoneNumber);
}

PhoneNo::~PhoneNo() {
   printf("Now deleting phoneNo %d-%d .\n", this->countryCode, this->phoneNumber);
}

int PhoneNo::getCountryCode() {
   return this->countryCode;
}

int PhoneNo::getNumber() {
   return this->phoneNumber;
}
// PhoneNo------------------------------


// DateFormat---------------------------
DateFormat::DateFormat(char* stringDate){
   int date = atoi(stringDate);
   this->year = date%10000;
   date = date/10000;
   this->month = date%100;
   this->day = date/100;
}

DateFormat::~DateFormat() {
   printf("Now deleting DateFormat %d/%d/%d .\n", this->day, this->month, this->year);
}

int DateFormat::getDay() {
   return this->day;
}

int DateFormat::getMonth() {
   return this->month;
}

int DateFormat::getYear() {
   return this->year;
}
// DateFormat---------------------------


// TimeFormat---------------------------
TimeFormat::TimeFormat(char* stringTime) {
   char hour[3];
   strcpy(hour, strtok(stringTime, ":"));
   char minute[3];
   strcpy(minute, strtok(NULL, ":"));

   this->hour = atoi(hour);
   this->minute = atoi(minute);
}

TimeFormat::~TimeFormat() {
   printf("Now deleting TimeFormat %d:%d .\n", this->hour, this->minute);
}

int TimeFormat::getHour() {
   return this->hour;
}

int TimeFormat::getMinute() {
   return this->minute;
}
// TimeFormat---------------------------