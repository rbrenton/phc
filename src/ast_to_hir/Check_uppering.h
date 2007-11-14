/*
 * phc -- the open source PHP compiler
 * See doc/license/README.license for licensing information
 *
 * Check there are no gotos or labels left.
 */

#ifndef PHC_CHECK_UPPERING_H
#define PHC_CHECK_UPPERING_H

#include "Check_lowering.h"


class Check_uppering : public Check_lowering
{
	public:

		// these statements are removed
		void post_goto (AST::AST_goto* in);
		void post_label (AST::AST_label* in);

		// these statements are re-added
		void post_continue (AST::AST_continue* in);
		void post_switch (AST::AST_switch* in);
		void post_if (AST::AST_if* in);
		void post_break (AST::AST_break* in);
		void post_while (AST::AST_while* in);
};

#endif // PHC_CHECK_UPPERING_H
