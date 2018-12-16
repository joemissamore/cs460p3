(define (funky1 a)
    (if (number? a)
        (display "Number")
        (display "Not a number")
    )
)

(define (main)
    (funky1 1)
)

(main)