(defpackage :roman-numerals
  (:use :cl)
  (:export :romanize))
;; I have take this approach from the video, its super weird that a language have a translation for this.
(in-package :roman-numerals)

(defun romanize (number)
  "Returns the Roman numeral representation for a given number."
  (format nil "~@R" number))