cmake_minimum_required(VERSION 3.22)
link_directories("C:\\Python\\libs")

project(PriceDownloader)
set(IMGUI_PATH  "imgui/")

file(GLOB IMGUI_SOURCES ${IMGUI_PATH}/*.cpp) 
add_library("ImGui" STATIC ${IMGUI_SOURCES})
target_include_directories("ImGui" PUBLIC ${IMGUI_PATH})
target_include_directories("ImGui" PUBLIC ${IMGUI_PATH}/backends)
add_executable(CardGames main.cpp Card.cpp Deck.cpp Player.cpp Casino.cpp imgui/imgui.cpp imgui/imgui_draw.cpp imgui/imgui_demo.cpp imgui/backends/imgui_impl_dx11.cpp imgui/backends/imgui_impl_win32.cpp)
target_link_libraries(CardGames PUBLIC ImGui)
target_include_directories(CardGames PUBLIC "C:\\Python\\include")

