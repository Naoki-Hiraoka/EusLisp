;;
;; DO NOT EDIT THIS FILE
;; this file is automatically generated from euslisp+euslib version 
;;
;;
(defclass room602-external-wall-5-object
  :super cascaded-link
  :slots (sensors
         ))
(defmethod room602-external-wall-5-object
  (:init
   (&rest args &key (name "room602-external-wall-5") (pos (float-vector 0 0 0)) (rot (unit-matrix 3)) &allow-other-keys)
   (let (c bc
         blink0
                 )
     (send-super* :init :name name args)

     ;; definition of link

     ;; definition of :room602-external-wall-5-bodyset2
     (setq bc (list
       (instance faceset :init :faces (list
         (instance face :init :vertices (list (float-vector -1745.0 150.0 -650.0) (float-vector -2745.0 150.0 -650.0) (float-vector -2745.0 -150.0 -650.0) (float-vector -1745.0 -150.0 -650.0)))
         (instance face :init :vertices (list (float-vector -1745.0 150.0 -650.0) (float-vector -1745.0 -150.0 -650.0) (float-vector -1745.0 -150.0 1150.0) (float-vector -1745.0 150.0 1150.0)))
         (instance face :init :vertices (list (float-vector -1745.0 150.0 1150.0) (float-vector -1745.0 -150.0 1150.0) (float-vector -2745.0 -150.0 1150.0) (float-vector -2745.0 150.0 1150.0)))
         (instance face :init :vertices (list (float-vector -2745.0 -150.0 -650.0) (float-vector -2745.0 150.0 -650.0) (float-vector -2745.0 150.0 1150.0) (float-vector -2745.0 -150.0 1150.0)))
         (instance face :init :vertices (list (float-vector 455.0 150.0 -650.0) (float-vector -545.0 150.0 -650.0) (float-vector -545.0 -150.0 -650.0) (float-vector 455.0 -150.0 -650.0)))
         (instance face :init :vertices (list (float-vector 455.0 150.0 -650.0) (float-vector 455.0 -150.0 -650.0) (float-vector 455.0 -150.0 1150.0) (float-vector 455.0 150.0 1150.0)))
         (instance face :init :vertices (list (float-vector 455.0 150.0 1150.0) (float-vector 455.0 -150.0 1150.0) (float-vector -545.0 -150.0 1150.0) (float-vector -545.0 150.0 1150.0)))
         (instance face :init :vertices (list (float-vector -545.0 150.0 1150.0) (float-vector -545.0 -150.0 1150.0) (float-vector -545.0 -150.0 -650.0) (float-vector -545.0 150.0 -650.0)))
         (instance face :init :vertices (list (float-vector 2655.0 150.0 -650.0) (float-vector 1655.0 150.0 -650.0) (float-vector 1655.0 -150.0 -650.0) (float-vector 2655.0 -150.0 -650.0)))
         (instance face :init :vertices (list (float-vector 2655.0 150.0 -650.0) (float-vector 2655.0 -150.0 -650.0) (float-vector 2655.0 -150.0 1150.0) (float-vector 2655.0 150.0 1150.0)))
         (instance face :init :vertices (list (float-vector 2655.0 150.0 1150.0) (float-vector 2655.0 -150.0 1150.0) (float-vector 1655.0 -150.0 1150.0) (float-vector 1655.0 150.0 1150.0)))
         (instance face :init :vertices (list (float-vector 1655.0 -150.0 -650.0) (float-vector 1655.0 150.0 -650.0) (float-vector 1655.0 150.0 1150.0) (float-vector 1655.0 -150.0 1150.0)))
         (instance face :init :vertices (list (float-vector -4195.0 150.0 -1350.0) (float-vector -4195.0 150.0 1350.0) (float-vector 4195.0 150.0 1350.0) (float-vector 4195.0 150.0 -1350.0))
                              :holes (list
         (instance hole :init :vertices (list (float-vector 555.0 150.0 -650.0) (float-vector 1555.0 150.0 -650.0) (float-vector 1555.0 150.0 1150.0) (float-vector 555.0 150.0 1150.0)))
         (instance hole :init :vertices (list (float-vector -1645.0 150.0 -650.0) (float-vector -645.0 150.0 -650.0) (float-vector -645.0 150.0 1150.0) (float-vector -1645.0 150.0 1150.0)))
         (instance hole :init :vertices (list (float-vector 1655.0 150.0 -650.0) (float-vector 2655.0 150.0 -650.0) (float-vector 2655.0 150.0 1150.0) (float-vector 1655.0 150.0 1150.0)))
         (instance hole :init :vertices (list (float-vector -545.0 150.0 -650.0) (float-vector 455.0 150.0 -650.0) (float-vector 455.0 150.0 1150.0) (float-vector -545.0 150.0 1150.0)))
         (instance hole :init :vertices (list (float-vector -2745.0 150.0 -650.0) (float-vector -1745.0 150.0 -650.0) (float-vector -1745.0 150.0 1150.0) (float-vector -2745.0 150.0 1150.0)))
         (instance hole :init :vertices (list (float-vector -2845.0 150.0 -650.0) (float-vector -2845.0 150.0 1150.0) (float-vector -3845.0 150.0 1150.0) (float-vector -3845.0 150.0 -650.0)))
))
         (instance face :init :vertices (list (float-vector -4195.0 150.0 -1350.0) (float-vector 4195.0 150.0 -1350.0) (float-vector 4195.0 -150.0 -1350.0) (float-vector -4195.0 -150.0 -1350.0)))
         (instance face :init :vertices (list (float-vector 4195.0 150.0 1350.0) (float-vector -4195.0 150.0 1350.0) (float-vector -4195.0 -150.0 1350.0) (float-vector 4195.0 -150.0 1350.0)))
         (instance face :init :vertices (list (float-vector 4195.0 -150.0 -1350.0) (float-vector 4195.0 150.0 -1350.0) (float-vector 4195.0 150.0 1350.0) (float-vector 4195.0 -150.0 1350.0)))
         (instance face :init :vertices (list (float-vector -4195.0 -150.0 1350.0) (float-vector -4195.0 150.0 1350.0) (float-vector -4195.0 150.0 -1350.0) (float-vector -4195.0 -150.0 -1350.0)))
         (instance face :init :vertices (list (float-vector -4195.0 -150.0 -1350.0) (float-vector 4195.0 -150.0 -1350.0) (float-vector 4195.0 -150.0 1350.0) (float-vector -4195.0 -150.0 1350.0))
                              :holes (list
         (instance hole :init :vertices (list (float-vector 555.0 -150.0 1150.0) (float-vector 1555.0 -150.0 1150.0) (float-vector 1555.0 -150.0 -650.0) (float-vector 555.0 -150.0 -650.0)))
         (instance hole :init :vertices (list (float-vector -1645.0 -150.0 1150.0) (float-vector -645.0 -150.0 1150.0) (float-vector -645.0 -150.0 -650.0) (float-vector -1645.0 -150.0 -650.0)))
         (instance hole :init :vertices (list (float-vector 1655.0 -150.0 1150.0) (float-vector 2655.0 -150.0 1150.0) (float-vector 2655.0 -150.0 -650.0) (float-vector 1655.0 -150.0 -650.0)))
         (instance hole :init :vertices (list (float-vector -545.0 -150.0 1150.0) (float-vector 455.0 -150.0 1150.0) (float-vector 455.0 -150.0 -650.0) (float-vector -545.0 -150.0 -650.0)))
         (instance hole :init :vertices (list (float-vector -2745.0 -150.0 1150.0) (float-vector -1745.0 -150.0 1150.0) (float-vector -1745.0 -150.0 -650.0) (float-vector -2745.0 -150.0 -650.0)))
         (instance hole :init :vertices (list (float-vector -3845.0 -150.0 -650.0) (float-vector -3845.0 -150.0 1150.0) (float-vector -2845.0 -150.0 1150.0) (float-vector -2845.0 -150.0 -650.0)))
))
         (instance face :init :vertices (list (float-vector 555.0 150.0 -650.0) (float-vector 555.0 150.0 1150.0) (float-vector 555.0 -150.0 1150.0) (float-vector 555.0 -150.0 -650.0)))
         (instance face :init :vertices (list (float-vector 1555.0 -150.0 1150.0) (float-vector 555.0 -150.0 1150.0) (float-vector 555.0 150.0 1150.0) (float-vector 1555.0 150.0 1150.0)))
         (instance face :init :vertices (list (float-vector 1555.0 -150.0 -650.0) (float-vector 1555.0 -150.0 1150.0) (float-vector 1555.0 150.0 1150.0) (float-vector 1555.0 150.0 -650.0)))
         (instance face :init :vertices (list (float-vector 1555.0 150.0 -650.0) (float-vector 555.0 150.0 -650.0) (float-vector 555.0 -150.0 -650.0) (float-vector 1555.0 -150.0 -650.0)))
         (instance face :init :vertices (list (float-vector -1645.0 -150.0 1150.0) (float-vector -1645.0 -150.0 -650.0) (float-vector -1645.0 150.0 -650.0) (float-vector -1645.0 150.0 1150.0)))
         (instance face :init :vertices (list (float-vector -645.0 -150.0 1150.0) (float-vector -1645.0 -150.0 1150.0) (float-vector -1645.0 150.0 1150.0) (float-vector -645.0 150.0 1150.0)))
         (instance face :init :vertices (list (float-vector -645.0 -150.0 -650.0) (float-vector -645.0 -150.0 1150.0) (float-vector -645.0 150.0 1150.0) (float-vector -645.0 150.0 -650.0)))
         (instance face :init :vertices (list (float-vector -645.0 150.0 -650.0) (float-vector -1645.0 150.0 -650.0) (float-vector -1645.0 -150.0 -650.0) (float-vector -645.0 -150.0 -650.0)))
         (instance face :init :vertices (list (float-vector -3845.0 150.0 -650.0) (float-vector -3845.0 150.0 1150.0) (float-vector -3845.0 -150.0 1150.0) (float-vector -3845.0 -150.0 -650.0)))
         (instance face :init :vertices (list (float-vector -2845.0 -150.0 1150.0) (float-vector -3845.0 -150.0 1150.0) (float-vector -3845.0 150.0 1150.0) (float-vector -2845.0 150.0 1150.0)))
         (instance face :init :vertices (list (float-vector -2845.0 -150.0 -650.0) (float-vector -2845.0 -150.0 1150.0) (float-vector -2845.0 150.0 1150.0) (float-vector -2845.0 150.0 -650.0)))
         (instance face :init :vertices (list (float-vector -2845.0 150.0 -650.0) (float-vector -3845.0 150.0 -650.0) (float-vector -3845.0 -150.0 -650.0) (float-vector -2845.0 -150.0 -650.0)))
       ))
       ))
     (dolist (b (cdr bc)) (send (car bc) :assoc b))
     (send (elt bc 0) :set-color :whitesmoke)
     (setq blink0 (instance bodyset-link :init (make-cascoords) :bodies bc :name :room602-external-wall-5-bodyset2 :weight 1 :centroid (float-vector 0.0 0.0 0.0) :inertia-tensor #2f((1.0 0.0 0.0) (0.0 1.0 0.0) (0.0 0.0 1.0))))

     ;; definition of assoc
     (send self :assoc blink0)

     ;; definition of end-coords

     ;; definition of joint


     ;; init-ending 
     (setq links (list blink0))
     (setq joint-list (list))
     (send self :init-ending)
     (send self :move-to (make-coords :pos pos :rot rot))
     (send-all links :worldcoords)

     self))

  (:handle (&rest args) (forward-message-to-all (list ) args))
  (:attention (&rest args) (forward-message-to-all (list ) args))
  (:button (&rest args) (forward-message-to-all (list ) args))
  )

(defun room602-external-wall-5 (&rest args) (instance* room602-external-wall-5-object :init args))
;; (format *error-output* "(instance room602-external-wall-5-object :init) for generating model~%")
