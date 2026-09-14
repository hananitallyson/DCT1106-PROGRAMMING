	.file	"arr.c"
	.text
	.section	.rodata
.LC1:
	.string	"[%d] Enter a int number: "
.LC2:
	.string	"%d"
.LC3:
	.string	"\n[arr_sum ]: %d"
.LC4:
	.string	"\n[arr_avg ]: %.1f"
.LC5:
	.string	"\n[arr_high]: %d"
.LC6:
	.string	"\n[arr_low ]: %d"
.LC7:
	.string	"\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -52(%rbp)
	pxor	%xmm0, %xmm0
	movss	%xmm0, -40(%rbp)
	movl	$0, -48(%rbp)
	movl	$0, -44(%rbp)
	movl	$10, %edi
	call	putchar@PLT
	movl	$0, -56(%rbp)
	jmp	.L2
.L7:
	movl	-56(%rbp), %eax
	leaq	.LC1(%rip), %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-32(%rbp), %rax
	movl	-56(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	leaq	.LC2(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc23_scanf@PLT
	cmpl	$0, -56(%rbp)
	je	.L3
	movl	-56(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %eax
	cmpl	%eax, -44(%rbp)
	jle	.L4
.L3:
	movl	-56(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %eax
	movl	%eax, -44(%rbp)
.L4:
	cmpl	$0, -56(%rbp)
	je	.L5
	movl	-56(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %eax
	cmpl	%eax, -48(%rbp)
	jge	.L6
.L5:
	movl	-56(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %eax
	movl	%eax, -48(%rbp)
.L6:
	movl	-56(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %eax
	addl	%eax, -52(%rbp)
	addl	$1, -56(%rbp)
.L2:
	cmpl	$4, -56(%rbp)
	jle	.L7
	movl	$5, -36(%rbp)
	pxor	%xmm0, %xmm0
	cvtsi2ssl	-52(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	cvtsi2ssl	-36(%rbp), %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -40(%rbp)
	movl	-52(%rbp), %eax
	leaq	.LC3(%rip), %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	pxor	%xmm2, %xmm2
	cvtss2sd	-40(%rbp), %xmm2
	movq	%xmm2, %rax
	leaq	.LC4(%rip), %rdx
	movq	%rax, %xmm0
	movq	%rdx, %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	-48(%rbp), %eax
	leaq	.LC5(%rip), %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-44(%rbp), %eax
	leaq	.LC6(%rip), %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L9
	call	__stack_chk_fail@PLT
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 16.2.1 20260810"
	.section	.note.GNU-stack,"",@progbits
