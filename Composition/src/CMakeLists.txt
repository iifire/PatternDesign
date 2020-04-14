aux_source_directory(. DIRSRCS)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_executable(cplus ${DIRSRCS})

target_link_libraries(
	cplus

)
