;; Project 3 Test 6
;; Predicates and If statements

(define (predicates x)
  (if (string? x) 
      "Is a string"
      (if (null? x)
	  "Is null"
	  (if (list? x)
	      "Is a list"
	      (if (zero? x)
		  "Is zero"
		  (if (number? x)
		      "Is a number"
		      "Is a USO"
		  )
	      )
	  )
      )
  )
)

(define (main)
  (display (predicates 0)) (newline)
  (display (predicates (+ 5 6))) (newline)
  (display (predicates '(a b c))) (newline)
  (display (predicates '())) (newline)
  (display (predicates "hello world")) (newline)
)