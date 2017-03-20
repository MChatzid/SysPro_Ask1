#ifndef _CDR_H_
#define _CDR_H_

#include "types.h"

class CDR {
private:
   char cdrStr[67];
   char cdr_uniq_id[11];
   PhoneNo* originator_number;
   PhoneNo* destination_number;
   DateFormat* date;
   TimeFormat* init_time; /* HH:MM 24-hour format */ 
   int duration; /* in minutes */
   char type;
   char tarrif;
   int fault_condition;

public:
   CDR(char* stringCDR);
   ~CDR();

   char* getString();
   char* getID();
   PhoneNo* getCaller();
   PhoneNo* getCallee();
   DateFormat* getDate();
   TimeFormat* getTime();
   int getDuration();
   char getType();
   char getTarrif();
   int getError();
};

#endif