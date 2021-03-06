#ifndef DEFS_H
#define DEFS_H

//parametres de la maison//vv 
#define coef_af 0.927007299  //  a fenetre ferm�e
#define coef_ao 0.795918367 // a fenetre ouverte
#define coef_bf 0.03649635 // b fenetre ferm�e
#define coef_bo 0.102040816  //b  fenetre ouverte
#define coef_df 25.196850 //d  fenetre ferm�e
#define coef_do 8.398950 // d fenetre ouverte

// adresse I2C adc AD7991
#define adresse_esclave 0x50   


// ecran principal, carte controle, carte simulateur

static const uint8_t control[]="CONTROLE";
static const uint8_t simu[]="SIMU";
static const uint8_t text[]="Text:"; 
static const uint8_t tint[]="Tint:"; 
static const uint8_t puis[]="PUIS:"; 
static const uint8_t fenetre[]="Fenetre:"; 

// ecran choix couleur, carte controle
static const uint8_t texte[]="Texte:";
static const uint8_t fond[]="Fond:";
static const uint8_t valeurs[]="Valeurs:";

static const uint16_t colors[]={ST7735_BLACK, ST7735_BLUE, ST7735_RED, ST7735_GREEN, ST7735_CYAN, ST7735_MAGENTA, ST7735_YELLOW, ST7735_WHITE};

#endif /* DEFS_H */