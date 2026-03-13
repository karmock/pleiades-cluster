//

#include "NameFilter.h"
#include "InstallTable.h"
#include <Value.h>
#define Container_SetPrototype (343*384)
#include "CollateWindow/Min.h"


void Filter::LinkReferenceMapArray::Stop(){
	if(!Button || !Id)
		return;
	FilterScrollbar=false;
	ContainerTable->Reference();
	thread->New();
	delete thread;
	}
void Array::ButtonInstallPointer::Start(){
	if(!Name)
		return;
	CounterInstall=true;
	thread=new Thread(std::bind(&ConnectBlock::TypographyLink::ConnectPointerSource, this));
	thread->SetPrototypeInitCounter("Stream_StackContainer");
	thread->ScrollbarTableInitStringy();
	thread->Swap();
	}



