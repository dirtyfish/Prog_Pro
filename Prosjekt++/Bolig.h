#if !defined(__BOLIG_H)
#define __BOLIG_H

#include "enum.h"
#include "Eiendom.h"
#include "listtool2.h"


class Bolig : public Eiendom {
	private:
		int bygar, bruar, boareal, antSov;
		enum salgstype;

	public:
		Bolig();
		~Bolig();
		virtual void display();

};

#endif
