/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _ASM_X86_SPARSEMEM_H
#define _ASM_X86_SPARSEMEM_H

#ifdef CONFIG_SPARSEMEM
/*
 * generic non-linear memory support:
 *
 * 1) we will not split memory into more chunks than will fit into the flags
 *    field of the struct page
 *
 * SECTION_SIZE_BITS		2^n: size of each section
 * MAX_PHYSADDR_BITS		2^n: max size of physical address space
 * MAX_PHYSMEM_BITS		2^n: how much memory we can have in that space
 *
 */

#ifdef CONFIG_X86_32
# ifdef CONFIG_X86_PAE
#	if 0 //ifndef YONGSEOB-MBS
#  define SECTION_SIZE_BITS	29
#  define MAX_PHYSADDR_BITS	36
#  define MAX_PHYSMEM_BITS	36
#	endif
# else
#	define YONGSEOB-MBS
#	if 0 //ifndef YONGSEOB-MBS
#  define SECTION_SIZE_BITS	26
#  define MAX_PHYSADDR_BITS	32
#  define MAX_PHYSMEM_BITS	32
#	endif
# endif
#else /* CONFIG_X86_32 */
# define SECTION_SIZE_BITS	27 /* matt - 128 is convenient right now */
# ifdef CONFIG_X86_5LEVEL
#	if 0 //ifndef YONGSEOB-MBS
#  define MAX_PHYSADDR_BITS	52
#  define MAX_PHYSMEM_BITS	52
#	endif
# else
#  define MAX_PHYSADDR_BITS	44
#  define MAX_PHYSMEM_BITS	46
# endif
#endif

#endif /* CONFIG_SPARSEMEM */
#endif /* _ASM_X86_SPARSEMEM_H */
