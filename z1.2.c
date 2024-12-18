const int led1 = 8;
const int led2 = 9;


unsigned long prethodnoVrijeme1 = 0; 
unsigned long prethodnoVrijeme2 = 0; 

const unsigned long interval1 = 2000; 
const unsigned long interval2 = 3000; 
const unsigned long trajanjePali = 500; 

bool stanjeLed1 = false;
bool stanjeLed2 = false; 

void setup() {
    pinMode(led1, OUTPUT); 
    pinMode(led2, OUTPUT); 
}

void loop() {
    unsigned long trenutnoVrijeme = millis(); 

    
    if (trenutnoVrijeme - prethodnoVrijeme1 >= interval1) {
        prethodnoVrijeme1 = trenutnoVrijeme;
        stanjeLed1 = true;  
        digitalWrite(led1, HIGH);
    }
    if (stanjeLed1 && trenutnoVrijeme - prethodnoVrijeme1 >= trajanjePali) {
        stanjeLed1 = false; 
        digitalWrite(led1, LOW);
    }


    if (trenutnoVrijeme - prethodnoVrijeme2 >= interval2) {
        prethodnoVrijeme2 = trenutnoVrijeme;
        stanjeLed2 = true; 
        digitalWrite(led2, HIGH);
    }
    if (stanjeLed2 && trenutnoVrijeme - prethodnoVrijeme2 >= trajanjePali) {
        stanjeLed2 = false; 
        digitalWrite(led2, LOW);
    }
}