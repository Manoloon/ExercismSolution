(defpackage :pizza-pi
  (:use :cl)
  (:export :dough-calculator :pizzas-per-cube
           :size-from-sauce :fair-share-p))

(in-package :pizza-pi)

(defun dough-calculator (pizzas diameter)
  (fround  (* pizzas (+ (/ (* 45 pi diameter) 20) 200))))

(defun size-from-sauce (sauce)
  (SQRT (/ (* 40 sauce) (* 3 PI))))

(defun pizzas-per-cube (cube-size diameter)
  (FLOOR (* 2 (/ (* cube-size (* cube-size cube-size)) (* 3 PI (* diameter diameter))))))
  
(defun fair-share-p (pizzas friends)
  (= 0 (MOD (* pizzas 8) friends)))