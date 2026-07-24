(defpackage :pal-picker
  (:use :cl)
  (:export :pal-picker :habitat-fitter :feeding-time-p
           :pet :play-fetch))

(in-package :pal-picker)

(defun pal-picker (personality)
  (case personality
    (:lazy "Cat")
    (:energetic "Dog")
    (:quiet "Fish")
    (:hungry "Rabbit")
    (:talkative "Bird")
    (otherwise "I don't know... A dragon?")))

(defun habitat-fitter (weight)
  (cond ((< weight 1) :just-your-imagination)
        ((< weight 10) :small)
        ((< weight 20) :medium)
        ((< weight 40) :large)
        (t :massive))
)

(defun feeding-time-p (fullness)
  (if(> fullness 20) "All is well." "It's feeding time!")
)

(defun pet (pet)
   (if (string= pet "Fish") "Maybe not with this pet...")
 )

(defun play-fetch (pet)
  (unless (equal pet "Dog") "Maybe not with this pet...") 
  )
