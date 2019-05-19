Import('env')
LabsLib = env.StaticLibrary('LabsLib',Glob('src/main/cpp/*.cpp'))
env.Program('test',Glob('src/test/cpp/*.cpp')+[LabsLib])
