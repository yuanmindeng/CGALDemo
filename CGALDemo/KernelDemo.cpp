#include "KernelDemo.h"
#include <iostream>
#include <CGAL/Simple_cartesian.h>
typedef CGAL::Simple_cartesian<double> Kernel;
typedef Kernel::Point_2 Point_2;
typedef Kernel::Segment_2 Segment_2;
using namespace std;

KernelDemo::KernelDemo()
{
}


KernelDemo::~KernelDemo()
{
}


void KernelDemo::pointAndSegment(){
	Point_2 p(1, 1);
	Point_2 q(10, 10);
	cout << "p = " << p << endl;
	cout << "q = " << q << endl;
	cout << "sqdis(p,q) = " << CGAL::squared_distance(p, q) << endl;//to compute the squared of p and q
	Segment_2 s(p, q);
	Point_2 m(5, 9);
	cout << "m=" << m << endl;
	cout << "squared_distance(s,m)" << CGAL::squared_distance(s, m) << endl;
	cout << "p, q, and m" << endl;

	switch (CGAL::orientation(p, q, m)){
	case CGAL::COLLINEAR:
		cout << "are collinear\n";
		break;
	case CGAL::LEFT_TURN:
		cout << "make a left turn\n";
		break;
	case CGAL::RIGHT_TURN:
		cout << "make a right turn\n";
		break;
	}
	//to compute the midpoint of p and q
	cout << "midpoint(p,q) = " << CGAL::midpoint(p, q) << endl;


}