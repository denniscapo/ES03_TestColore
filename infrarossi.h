/** ****************************************************************************************
* @file infrarossi.h
* @brief 
* @author Dennis Capozziello
* @date 14/01/22
*/

//------------------------------------------------------------------------------------------
//=== Constants ============================================================================
//------------------------------------------------------------------------------------------
#define IR_PIN		PE10    //Pin dove � collegato il sensore IR

//------------------------------------------------------------------------------------------
//=== Function prototypes ==================================================================
//------------------------------------------------------------------------------------------
void irInit();
int irRead();
void vTaskRilevaColore(void * pvParameters);
//------------------------------------------------------------------------------------------