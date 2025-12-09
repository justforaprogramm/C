	.file	"main.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"exit"
.LC1:
	.string	"help"
.LC2:
	.string	"help text:"
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC3:
	.string	"\nexit:\texits the programm\nhelp:\tshows this help text"
	.section	.rodata.str1.1
.LC4:
	.string	"getContacts"
.LC5:
	.string	"Contactinfo text"
.LC6:
	.string	"getContact"
.LC7:
	.string	"add"
.LC8:
	.string	"add text"
.LC9:
	.string	"edit"
.LC10:
	.string	"edit text"
.LC11:
	.string	"delete"
.LC12:
	.string	"delete text"
.LC13:
	.string	"type help for help!"
	.text
	.p2align 4
	.globl	giveAnswer
	.type	giveAnswer, @function
giveAnswer:
.LFB38:
	.cfi_startproc
	endbr64
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movq	%rdi, %rsi
	movq	%rdi, %rbx
	leaq	.LC0(%rip), %rdi
	call	strcmp@PLT
	movl	%eax, %edx
	movl	$1, %eax
	testl	%edx, %edx
	je	.L1
	movq	%rbx, %rsi
	leaq	.LC1(%rip), %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	je	.L22
	movq	%rbx, %rsi
	leaq	.LC4(%rip), %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	je	.L8
	movq	%rbx, %rsi
	leaq	.LC6(%rip), %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	je	.L8
	movq	%rbx, %rsi
	leaq	.LC7(%rip), %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	je	.L23
	movq	%rbx, %rsi
	leaq	.LC9(%rip), %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	je	.L24
	movq	%rbx, %rsi
	leaq	.LC11(%rip), %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L11
	leaq	.LC12(%rip), %rdi
	call	puts@PLT
	xorl	%eax, %eax
.L1:
	popq	%rbx
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L22:
	.cfi_restore_state
	leaq	.LC2(%rip), %rdi
	movl	$28, %ebx
	call	puts@PLT
	.p2align 4,,10
	.p2align 3
.L4:
	movl	$45, %edi
	call	putchar@PLT
	subl	$1, %ebx
	jne	.L4
	leaq	.LC3(%rip), %rdi
	movl	$28, %ebx
	call	puts@PLT
	.p2align 4,,10
	.p2align 3
.L5:
	movl	$45, %edi
	call	putchar@PLT
	subl	$1, %ebx
	jne	.L5
	movl	$10, %edi
	call	putchar@PLT
	xorl	%eax, %eax
	jmp	.L1
	.p2align 4,,10
	.p2align 3
.L8:
	leaq	.LC5(%rip), %rdi
	call	puts@PLT
	xorl	%eax, %eax
	jmp	.L1
.L11:
	leaq	.LC13(%rip), %rdi
	call	puts@PLT
	xorl	%eax, %eax
	jmp	.L1
	.p2align 4,,10
	.p2align 3
.L23:
	leaq	.LC8(%rip), %rdi
	call	puts@PLT
	xorl	%eax, %eax
	jmp	.L1
.L24:
	leaq	.LC10(%rip), %rdi
	call	puts@PLT
	xorl	%eax, %eax
	jmp	.L1
	.cfi_endproc
.LFE38:
	.size	giveAnswer, .-giveAnswer
	.section	.rodata.str1.1
.LC14:
	.string	"Hello from Contactmanager!"
.LC15:
	.string	"choose Action: "
.LC16:
	.string	"%49s"
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB37:
	.cfi_startproc
	endbr64
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	subq	$64, %rsp
	.cfi_def_cfa_offset 96
	movq	%fs:40, %rax
	movq	%rax, 56(%rsp)
	xorl	%eax, %eax
	cmpl	$1, %edi
	jg	.L34
	leaq	.LC14(%rip), %rdi
	leaq	.LC15(%rip), %r12
	movq	%rsp, %rbx
	call	puts@PLT
	leaq	.LC16(%rip), %rbp
	jmp	.L29
	.p2align 4,,10
	.p2align 3
.L35:
	movq	%rbx, %rdi
	call	giveAnswer
	testl	%eax, %eax
	jne	.L27
.L29:
	movq	%r12, %rsi
	movl	$2, %edi
	xorl	%eax, %eax
	call	__printf_chk@PLT
	xorl	%eax, %eax
	movq	%rbx, %rsi
	movq	%rbp, %rdi
	call	__isoc99_scanf@PLT
	cmpl	$1, %eax
	je	.L35
.L27:
	movq	56(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L36
	addq	$64, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 32
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
.L34:
	.cfi_restore_state
	movq	8(%rsi), %rdi
	call	giveAnswer
	jmp	.L27
.L36:
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE37:
	.size	main, .-main
	.text
	.p2align 4
	.globl	help
	.type	help, @function
help:
.LFB39:
	.cfi_startproc
	endbr64
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	leaq	.LC2(%rip), %rdi
	movl	$28, %ebx
	call	puts@PLT
	.p2align 4,,10
	.p2align 3
.L38:
	movl	$45, %edi
	call	putchar@PLT
	subl	$1, %ebx
	jne	.L38
	leaq	.LC3(%rip), %rdi
	movl	$28, %ebx
	call	puts@PLT
	.p2align 4,,10
	.p2align 3
.L39:
	movl	$45, %edi
	call	putchar@PLT
	subl	$1, %ebx
	jne	.L39
	movl	$10, %edi
	call	putchar@PLT
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE39:
	.size	help, .-help
	.p2align 4
	.globl	add
	.type	add, @function
add:
.LFB40:
	.cfi_startproc
	endbr64
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	leaq	.LC8(%rip), %rdi
	call	puts@PLT
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE40:
	.size	add, .-add
	.p2align 4
	.globl	edit
	.type	edit, @function
edit:
.LFB41:
	.cfi_startproc
	endbr64
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	leaq	.LC10(%rip), %rdi
	call	puts@PLT
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE41:
	.size	edit, .-edit
	.p2align 4
	.globl	delete
	.type	delete, @function
delete:
.LFB42:
	.cfi_startproc
	endbr64
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	leaq	.LC12(%rip), %rdi
	call	puts@PLT
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE42:
	.size	delete, .-delete
	.p2align 4
	.globl	getContacts
	.type	getContacts, @function
getContacts:
.LFB43:
	.cfi_startproc
	endbr64
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	leaq	.LC5(%rip), %rdi
	call	puts@PLT
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE43:
	.size	getContacts, .-getContacts
	.p2align 4
	.globl	getContact
	.type	getContact, @function
getContact:
.LFB46:
	.cfi_startproc
	endbr64
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	leaq	.LC5(%rip), %rdi
	call	puts@PLT
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE46:
	.size	getContact, .-getContact
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
