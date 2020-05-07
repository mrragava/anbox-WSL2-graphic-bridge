// Generated Code - DO NOT EDIT !!
// generated by 'emugen'

#ifndef GUARD_gles2_decoder_context_t
#define GUARD_gles2_decoder_context_t

#include <external\android-emugl\host\include\libOpenglRender\IOStream.h>
#include "gles2_server_context.h"



#include <map>

#include <mutex>

#include "external/android-emugl/shared/emugl/common/logging.h"

struct gles2_decoder_context_t : public gles2_server_context_t {

	size_t decode(void *buf, size_t bufsize, IOStream *stream);
	void freeShader(); 
				void freeProgram(); 
				std::map<GLuint, GLuint> m_programs; 
				std::map<GLuint, GLuint> m_shaders; 
				std::mutex m_lock; 
		
};

#endif  // GUARD_gles2_decoder_context_t