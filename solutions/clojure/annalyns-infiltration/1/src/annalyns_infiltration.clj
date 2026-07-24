(ns annalyns-infiltration)

(defn can-fast-attack?[knight-awake?]
  "Returns true if a fast-attack can be made, false otherwise."
  (not knight-awake?))

(defn can-spy?[knight-awake? archer-awake? prisoner-awake?]
  "Returns true if the kidnappers can be spied upon, false otherwise."
  (or knight-awake? archer-awake? prisoner-awake?))

(defn can-signal-prisoner?[archer-awake? prisoner-awake?]
  "Returns true if the prisoner can be signalled, false otherwise."
  (and (not archer-awake?) prisoner-awake?))

(defn can-free-prisoner?[knight-awake? archer-awake? prisoner-awake? dog-present?]
  "Returns true if prisoner can be freed, false otherwise."
  (or (and dog-present?
           (not archer-awake?))
      (and (not dog-present?)
           prisoner-awake?
           (not knight-awake?)
           (not archer-awake?))))
