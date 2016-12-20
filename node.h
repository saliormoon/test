/*
 * node.h
 *
 *  Created on: 2016Äê12ÔÂ20ÈÕ
 *      Author: w81021089
 */

#ifndef NODE_H_
#define NODE_H_

class node{
	int from_v;
	int to_v;
	double value;
public:
	node(int from_id,int to_id,double val);
	void gather(node v1,node v2);
	double apply(node v1,node v2);
};



#endif /* NODE_H_ */
