/*
* Copyright (c) 2016 ARM Limited. All rights reserved.
* SPDX-License-Identifier: Apache-2.0
* Licensed under the Apache License, Version 2.0 (the License); you may
* not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an AS IS BASIS, WITHOUT
* WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "unity.h"
#include "unity_fixture.h"

#define PAL_RUN_ALL_TESTS 1

// pal Socket API tests
TEST_GROUP_RUNNER(pal_socket)
{
#if (PAL_RUN_ALL_TESTS || PAL_TEST_GROUP_SOCKET || socketUDPCreationOptionsTest)
    RUN_TEST_CASE(pal_socket, socketUDPCreationOptionsTest);
#endif
#if (PAL_RUN_ALL_TESTS || PAL_TEST_GROUP_SOCKET || basicTCPclientSendRecieve)
	RUN_TEST_CASE(pal_socket, basicTCPclientSendRecieve);
#endif
#if (PAL_RUN_ALL_TESTS || PAL_TEST_GROUP_SOCKET || basicUDPclientSendRecieve)
	RUN_TEST_CASE(pal_socket, basicUDPclientSendRecieve);
#endif
#if (PAL_RUN_ALL_TESTS || PAL_TEST_GROUP_SOCKET || basicSocketScenario3)
    RUN_TEST_CASE(pal_socket, basicSocketScenario3);
#endif
#if (PAL_RUN_ALL_TESTS || PAL_TEST_GROUP_SOCKET || basicSocketScenario4)
    //RUN_TEST_CASE(pal_socket, basicSocketScenario4);
#endif
#if (PAL_RUN_ALL_TESTS || PAL_TEST_GROUP_SOCKET || tProvUDPTest)
    RUN_TEST_CASE(pal_socket, tProvUDPTest);
#endif
#if (PAL_RUN_ALL_TESTS || PAL_TEST_GROUP_SOCKET || nonBlockingAsyncTest)
    RUN_TEST_CASE(pal_socket, nonBlockingAsyncTest);
#endif
#if (PAL_RUN_ALL_TESTS || PAL_TEST_GROUP_SOCKET || ServerSocketScenario)
    //RUN_TEST_CASE(pal_socket, ServerSocketScenario);
#endif

}

