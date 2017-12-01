
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name thcomips -dir "C:/Users/cslab/Desktop/thcomips/planAhead_run_3" -part xc3s1200efg320-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/cslab/Desktop/thcomips/cpu_top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/cslab/Desktop/thcomips} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "cpu_top.ucf" [current_fileset -constrset]
add_files [list {cpu_top.ucf}] -fileset [get_property constrset [current_run]]
link_design
