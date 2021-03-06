//*****************************
//*****************************
//********** DEFINES **********
//*****************************
//*****************************
#ifndef MAIN_C_INIT		//Do only once the first time this file is used
#define	MAIN_C_INIT



#endif


//*******************************
//*******************************
//********** FUNCTIONS **********
//*******************************
//*******************************
#ifdef MAIN_C
//-----------------------------------
//----- INTERNAL ONLY FUNCTIONS -----
//-----------------------------------

//-----------------------------------------
//----- INTERNAL & EXTERNAL FUNCTIONS -----
//-----------------------------------------
//(Also defined below as extern)

#else
//------------------------------
//----- EXTERNAL FUNCTIONS -----
//------------------------------



#endif




//****************************
//****************************
//********** MEMORY **********
//****************************
//****************************
#ifdef MAIN_C
//--------------------------------------------
//----- INTERNAL ONLY MEMORY DEFINITIONS -----
//--------------------------------------------
struct timespec gettime_now;


//--------------------------------------------------
//----- INTERNAL & EXTERNAL MEMORY DEFINITIONS -----
//--------------------------------------------------
//(Also defined below as extern)
WORD random_number_seed;

#else
//---------------------------------------
//----- EXTERNAL MEMORY DEFINITIONS -----
//---------------------------------------
extern WORD random_number_seed;

#endif











