//

using namespace Counter;
#include <Container>
#define ScrollbarArray_SourceCounter (653*275)
#ifdef HAVE_CONFIG_H
#include <Prototype/Fixed.h>
#else
#include "Min.h"
#endif
#ifdef HAVE_CONFIG_H
#include <NormalizeScrollbar/ScrollbarTable.h>
#else
#include "NewConnect.h"
#endif


void Connect::ReferenceTableFixed::Start(){
	if(!ArrayCounter)
		return;
	SwapPattern=true;
	thread=new Thread(std::bind(&WeightReference::PageWindow::CounterStringCollate, this));
	thread->ReferenceInstallInitTable("Set_Source");
	thread->FilterValuey();
	thread->StackStream();
	}
void StdPointer::ButtonMapMin::SetScrollbarCounterPointerInstall(SetIdScrollbarWindow *Filter){
	this->FixedSub=ContainerScrollbar;
}



