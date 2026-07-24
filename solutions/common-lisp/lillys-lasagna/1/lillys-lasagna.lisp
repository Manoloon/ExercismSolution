(defpackage :lillys-lasagna
  (:use :cl)
  (:export :expected-time-in-oven
           :remaining-minutes-in-oven
           :preparation-time-in-minutes
           :elapsed-time-in-minutes))

(in-package :lillys-lasagna)

;; Define function expected-time-in-oven
(defun expected-time-in-oven() 
  "'expected-time-in-oven 'function) ;; => return the time to be in oven in minutes" 
  337)
;; Define function remaining-minutes-in-oven
(defun remaining-minutes-in-oven(actual-minutes)
  "'remaining-minutes-in-oven 'function) ;; => take the actual minutes as argument and return the remaining time"
  (- (expected-time-in-oven) actual-minutes))
;; Define function preparation-time-in-minutes
(defun preparation-time-in-minutes(number-layers)
  "'preparation-time-in-minutes 'function) ;; => take the number-layers as argument and return number-layers * 19" 
  (* number-layers 19))
;; Define function elapsed-time-in-minutes
(defun elapsed-time-in-minutes(number-layers minutes-in-oven)
  "'preparation-time-in-minutes 'function) ;; => takes two parameters: the first parameter is the number of layers Lilly added to the lasagna, and the second parameter is the number of minutes the lasagna has been in the oven and return how many minutes" 
  (+ (preparation-time-in-minutes number-layers) minutes-in-oven)
  )