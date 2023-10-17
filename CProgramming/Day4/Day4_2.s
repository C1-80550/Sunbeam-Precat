	.file	"Day4_2.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC1:
	.ascii "d = %.2f\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$5, 28(%esp)
	fildl	28(%esp)
	fldl	LC0
	fstpl	8(%esp)
	fstpl	(%esp)
	call	_pow
	fstpl	16(%esp)
	fldl	16(%esp)
	fstpl	4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	ret
	.section .rdata,"dr"
	.align 8
LC0:
	.long	0
	.long	1073741824
	.ident	"GCC: (tdm-1) 10.3.0"
	.def	_pow;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
