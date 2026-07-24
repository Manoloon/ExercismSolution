(ns cars-assemble)
(def prod 221)
(defn production-rate
  "Returns the assembly line's production rate per hour,
   taking into account its success rate"
  [speed]
  (double  (cond (= speed 0) 0.0
        (< speed 5) (* prod speed)
        (< speed 9) (* (* prod 0.9) speed)
        (= speed 9) (* (* prod 0.8) speed)
        :else (* (/(* prod 77)100) speed))))

(defn working-items
  "Calculates how many working cars are produced per minute"
  [speed]
  (int (/ (production-rate speed)60)))
