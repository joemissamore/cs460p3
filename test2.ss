(define (main)
	(display (+ (* 1.2 (- 2 (/ 1 3.1))) -8.7)) (newline)
	(display (/ (+ (/ 2 3.2) (/ 2.3 9)) (- (/ 5 1.4) (/ 2 3.5)))) (newline)
	(display (+ 1 (/ 1 (+ 2 (/ 1 (+ 1 (/ 1 2.6))))))) (newline)
	(display (* 1 -2 3 -2 5 -6 7)) (newline)
	(display (* (round 10.3) (modulo 3 7))) (newline)
)

(main)