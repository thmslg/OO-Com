Import('env')
localEnv = env.Clone()

sources = [
'Sources/DataFrame.cpp',
]

oocom = localEnv.Library('OO-Com', sources )
localEnv.Prepend(LIBS=oocom)

testList =  [
'UnitTests/DataFrame.t.h',
]

localEnv.CxxTest('testrunner',testList, CXXFLAGS='-Wall -W -Wextra')

Return('oocom')