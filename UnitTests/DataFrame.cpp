/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    status = CxxTest::Main<CxxTest::ErrorPrinter>( tmp, argc, argv );
    return status;
}
bool suite_DataFrameTest_init = false;
#include "UnitTests/DataFrame.t.h"

static DataFrameTest suite_DataFrameTest;

static CxxTest::List Tests_DataFrameTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DataFrameTest( "UnitTests/DataFrame.t.h", 4, "DataFrameTest", suite_DataFrameTest, Tests_DataFrameTest );

static class TestDescription_suite_DataFrameTest_testPressureSensorLaw : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DataFrameTest_testPressureSensorLaw() : CxxTest::RealTestDescription( Tests_DataFrameTest, suiteDescription_DataFrameTest, 8, "testPressureSensorLaw" ) {}
 void runTest() { suite_DataFrameTest.testPressureSensorLaw(); }
} testDescription_suite_DataFrameTest_testPressureSensorLaw;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
