/*
 * This file is part of the coco-disasm project.
 *
 * Copyright (c) 2017 by David Breeding
 *
 * This project is licensed under the Gnu GPL v3 license. 
 * You should have received a copy of the licence for this program
 * in the file "COPYING".  If not, the license is available at
 *       https://www.gnu.org/licenses/gpl-3.0.en.html
 *
 */

/* amode.h Defines for addressing modes */

#ifndef AMODES

#define AMODES 15	/* only 12, but allow for start @1 plus one */

/* Addressing modes (storage order) */
/* defines offset into data default string */
/* IMPORTANT!  These first 12 entries _MUST_ remain in the given order! */

#define AM_INH	 0	    /*  Inherent (no postbytes)	*/
#define AM_DIMM	 2	    /*  D Immediate		*/
#define AM_XIMM	 3	    /*  X Immediate		*/
#define AM_YIMM	 4	    /*  Y Immediate		*/
#define AM_UIMM	 5	    /*  U Immediate		*/
#define AM_SIMM	 6	    /*  S Immediate		*/
#define AM_XIDX	 7	    /*  X-Indexed	*/

    /* The following 3 classes do not apear in dtble.h - and never explicitly
	 * mentioned in the source.  They are here to reserve space in the
	 * Y,U,and S indexed modes, and are given names for clarity
	 */

#define AM_YIDX	 8	    /*  Y-Indexed	*/
#define AM_UIDX	 9	    /*  U-Indexed	*/
#define AM_SIDX	10	    /*  S-Indexed	*/

	/* All the modes above _MUST_ remain in the exact order
	 * for processing in the function Domode (in cmdfile.c
	 */

#define AM_BYTI	 1	    /*  1-byte immediate	*/
#define AM_DRCT 11	    /*  Direct	*/
#define AM_EXT	12	    /*  Extended	*/
#define AM_REL	13	    /*  Relative	*/

/* Classes below don't affect addressing modes */

#define AM_REG	14	    /*  Register - no addressing	*/
#define AM_PSH  15	    /*  Psh/pul instr	*/
#define AM_WIMM 16
#define AM_TFM	17
#define AM_BIT  18

#endif
