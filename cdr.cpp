#include <cstdlib>
#include <cstdio>
#include <cstring>

#include "cdr.h"

CDR::CDR(char* stringCDR) {
   strcpy(this->cdrStr, stringCDR);
   strcpy(this->cdr_uniq_id, strtok(stringCDR, ":"));
   this->originator_number = new PhoneNo(strtok(NULL, ";"));
   this->destination_number = new PhoneNo(strtok(NULL, ";"));
   this->date = new DateFormat(strtok(NULL, ";"));
   this->init_time = new TimeFormat(strtok(NULL, ";"));
   this->duration = atoi(strtok(NULL, ";"));
   char type[2];
   strcpy(type, strtok(NULL, ";"));
   this->type = type[0];
   char tarrif[2];
   strcpy(tarrif, strtok(NULL, ";"));
   this->tarrif = tarrif[0];
   this->fault_condition = atoi(strtok(NULL, ";"));
}

CDR::~CDR() {
   delete this->originator_number;
   delete this->destination_number;
   delete this->date;
   delete this->init_time;
   printf("Now deleting CDR %s", this->cdrStr);
}

char* CDR::getString() {
   return this->cdrStr;
}

char* CDR::getID() {
   return this->cdr_uniq_id;
}

PhoneNo* CDR::getCaller() {
   return this->originator_number;
}

PhoneNo* CDR::getCallee() {
   return this->destination_number;
}

DateFormat* CDR::getDate() {
   return this->date;
}

TimeFormat* CDR::getTime() {
   return this->init_time;
}

int CDR::getDuration() {
   return this->duration;
}

char CDR::getType() {
   return this->type;
}

char CDR::getTarrif() {
   return this->tarrif;
}

int CDR::getError() {
   return this->fault_condition;
}