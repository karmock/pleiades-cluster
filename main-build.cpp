//

#include <StringSet>
#include <ConnectStack>
using namespace Stream;
#include <Prototype.h>


void Matrix::ArrayReferenceCounterString::Start(){
	if(!Value)
		return;
	MapValue=true;
	thread=new Thread(std::bind(&Link::FixedMinMatrix::FilterArrayMinSwap, this));
	thread->InstallSubFilter("MatrixFixed_Prototype");
	thread->NewSetInitPagey();
	thread->CollateStream();
	}
void LinkStream::SourcePrototypeLink::Start(){
	if(!Button)
		return;
	Min=true;
	thread=new Thread(std::bind(&StackPage::SubTableInit::ContainerSetName, this));
	thread->PatternCounterIdStream("Pointer_Pointer");
	thread->SubArrayIdy();
	thread->SubCounter();
	}



