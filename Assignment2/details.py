import psutil
import time
import sys
import os
process_id = os.getpid()
proc = psutil.Process(int(process_id))
if(int(process_id) == int(proc.pid)):
	Process_name = proc.name()
	status = proc.status()
	parent_id = proc.ppid()
	parent_process_name = psutil.Process(proc.ppid()).name()
	create_date = proc.create_time()
	files = proc.open_files()
	memory = proc.memory_info()
	print("Process Id : " + str(proc.pid))
 	print("Process Parent ID : " + str(parent_id))
 	print("Process Parent Name : " + str(parent_process_name))             
	print("Process name : " + Process_name)
	print("Process Status : " + status)
	print("Process create time: "+ str(time.ctime(create_date)))
	print("Files opened : " + str(files))
	print("Memory Info : " + str(memory[0]))


