	.file	"round_to.c"
	.text
	.globl	round_to
	.type	round_to, @function
round_to:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movss	%xmm0, -36(%rbp)
	movl	%edi, -40(%rbp)
	movl	$1, -20(%rbp)
	movl	$0, -16(%rbp)
	jmp	.L2
.L3:
	movl	-20(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, -20(%rbp)
	addl	$1, -16(%rbp)
.L2:
	movl	-16(%rbp), %eax
	cmpl	-40(%rbp), %eax
	jl	.L3
	pxor	%xmm0, %xmm0
	cvtsi2ssl	-20(%rbp), %xmm0
	movss	-36(%rbp), %xmm1
	mulss	%xmm1, %xmm0
	movss	%xmm0, -8(%rbp)
	movss	-8(%rbp), %xmm0
	cvttss2sil	%xmm0, %eax
	movl	%eax, -12(%rbp)
	pxor	%xmm1, %xmm1
	cvtsi2ssl	-12(%rbp), %xmm1
	movss	-8(%rbp), %xmm0
	subss	%xmm1, %xmm0
	movss	%xmm0, -4(%rbp)
	movss	-4(%rbp), %xmm0
	comiss	.LC0(%rip), %xmm0
	jb	.L4
	addl	$1, -12(%rbp)
.L4:
	pxor	%xmm0, %xmm0
	cvtsi2ssl	-12(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	cvtsi2ssl	-20(%rbp), %xmm1
	divss	%xmm1, %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	round_to, .-round_to
	.section	.rodata
	.align 8
.LC1:
	.string	"\nEnter a float number (e.g., 14.256): "
.LC2:
	.string	"%99s"
.LC3:
	.string	"%f"
	.align 8
.LC4:
	.string	"Enter the number of decimal digits (e.g., 2): "
.LC5:
	.string	"%d"
.LC6:
	.string	"%s -> %.*f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	addq	$-128, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-112(%rbp), %rax
	leaq	.LC2(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	leaq	-124(%rbp), %rdx
	leaq	.LC3(%rip), %rcx
	leaq	-112(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_sscanf@PLT
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-120(%rbp), %rax
	leaq	.LC5(%rip), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	movl	-120(%rbp), %edx
	movl	-124(%rbp), %eax
	movl	%edx, %edi
	movd	%eax, %xmm0
	call	round_to
	movd	%xmm0, %eax
	movl	%eax, -116(%rbp)
	pxor	%xmm1, %xmm1
	cvtss2sd	-116(%rbp), %xmm1
	movq	%xmm1, %rcx
	movl	-120(%rbp), %edx
	leaq	-112(%rbp), %rax
	leaq	.LC6(%rip), %rdi
	movq	%rcx, %xmm0
	movq	%rax, %rsi
	movl	$1, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L10
	call	__stack_chk_fail@PLT
.L10:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC0:
	.long	1056964608
	.ident	"GCC: (GNU) 16.2.1 20260810"
	.section	.note.GNU-stack,"",@progbits
