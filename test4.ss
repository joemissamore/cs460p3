;; Project 3 Test 4
;; List operations

(define (listop_ex1)
	(cons (car '(x y z)) (cdr '(a b c 1 2 3)))
)
			
(define (listop_ex2)
	(cons (cadr '(x y z)) (cdddr '(a b c 1 2 3)))
)

(define (main)
	(display (listop_ex1)) (newline)
	(display (listop_ex2)) (newline)
)

(main)