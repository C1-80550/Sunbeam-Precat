	.file	"Day17_1.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "x=%d y=%d \12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$2, 28(%esp)
	movl	$3, 24(%esp)
	movl	28(%esp), %edx
	leal	1(%edx), %eax
	movl	%eax, 28(%esp)
	movl	24(%esp), %eax
	leal	1(%eax), %ecx
	movl	%ecx, 24(%esp)
	andl	%edx, %eax
	xorl	%eax, 28(%esp)
	movl	24(%esp), %eax
	movl	%eax, 8(%esp)
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	ret
	.ident	"GCC: (tdm-1) 10.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
