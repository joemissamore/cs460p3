(define (foo x)
  (- 4 x)
  )

(define (main)
	(display (* 4 (- (+ 1 (foo  3)) 2)))
	(newline)
)

(main)
