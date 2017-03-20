#ifndef TYPES_H
#define TYPES_H

class PhoneNo {
private:
   int countryCode;
   int phoneNumber;

public:
   PhoneNo(char* stringNum);
   ~PhoneNo();

   int getCountryCode();
   int getNumber();
};

class DateFormat {
private:
   int day;
   int month;
   int year;

public:
   DateFormat(char* stringDate);
   ~DateFormat();

   int getDay();
   int getMonth();
   int getYear();
};

class TimeFormat {
private:
   int hour;
   int minute;

public:
   TimeFormat(char* stringTime);
   ~TimeFormat();

   int getHour();
   int getMinute();
};

#endif