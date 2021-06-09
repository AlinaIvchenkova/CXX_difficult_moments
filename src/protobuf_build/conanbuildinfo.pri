CONAN_INCLUDEPATH += "/home/alina/.conan/data/protobuf/3.17.1/_/_/package/645a1e1c64ed36f82391f6d395fec125f43abcdd/include" \
    "/home/alina/.conan/data/zlib/1.2.11/_/_/package/6af9cc7cb931c5ad942174fd7838eb655717c709/include"
CONAN_LIBS += -lprotoc -lprotobuf -lz
CONAN_SYSTEMLIBS += -lpthread
CONAN_FRAMEWORKS += 
CONAN_FRAMEWORK_PATHS += 
CONAN_LIBDIRS += -L"/home/alina/.conan/data/protobuf/3.17.1/_/_/package/645a1e1c64ed36f82391f6d395fec125f43abcdd/lib" \
    -L"/home/alina/.conan/data/zlib/1.2.11/_/_/package/6af9cc7cb931c5ad942174fd7838eb655717c709/lib"
CONAN_BINDIRS += "/home/alina/.conan/data/protobuf/3.17.1/_/_/package/645a1e1c64ed36f82391f6d395fec125f43abcdd/bin"
CONAN_RESDIRS += 
CONAN_BUILDDIRS += "/home/alina/.conan/data/protobuf/3.17.1/_/_/package/645a1e1c64ed36f82391f6d395fec125f43abcdd/" \
    "/home/alina/.conan/data/protobuf/3.17.1/_/_/package/645a1e1c64ed36f82391f6d395fec125f43abcdd/lib/cmake/protobuf" \
    "/home/alina/.conan/data/zlib/1.2.11/_/_/package/6af9cc7cb931c5ad942174fd7838eb655717c709/"
CONAN_DEFINES += 
CONAN_QMAKE_CXXFLAGS += 
CONAN_QMAKE_CFLAGS += 
CONAN_QMAKE_LFLAGS += 
CONAN_QMAKE_LFLAGS += 

CONAN_INCLUDEPATH_PROTOBUF += "/home/alina/.conan/data/protobuf/3.17.1/_/_/package/645a1e1c64ed36f82391f6d395fec125f43abcdd/include"
CONAN_LIBS_PROTOBUF += -lprotoc -lprotobuf
CONAN_SYSTEMLIBS_PROTOBUF += -lpthread
CONAN_FRAMEWORKS_PROTOBUF += 
CONAN_FRAMEWORK_PATHS_PROTOBUF += 
CONAN_LIBDIRS_PROTOBUF += -L"/home/alina/.conan/data/protobuf/3.17.1/_/_/package/645a1e1c64ed36f82391f6d395fec125f43abcdd/lib"
CONAN_BINDIRS_PROTOBUF += "/home/alina/.conan/data/protobuf/3.17.1/_/_/package/645a1e1c64ed36f82391f6d395fec125f43abcdd/bin"
CONAN_RESDIRS_PROTOBUF += 
CONAN_BUILDDIRS_PROTOBUF += "/home/alina/.conan/data/protobuf/3.17.1/_/_/package/645a1e1c64ed36f82391f6d395fec125f43abcdd/" \
    "/home/alina/.conan/data/protobuf/3.17.1/_/_/package/645a1e1c64ed36f82391f6d395fec125f43abcdd/lib/cmake/protobuf"
CONAN_DEFINES_PROTOBUF += 
CONAN_QMAKE_CXXFLAGS_PROTOBUF += 
CONAN_QMAKE_CFLAGS_PROTOBUF += 
CONAN_QMAKE_LFLAGS_PROTOBUF += 
CONAN_QMAKE_LFLAGS_PROTOBUF += 
CONAN_PROTOBUF_ROOT = "/home/alina/.conan/data/protobuf/3.17.1/_/_/package/645a1e1c64ed36f82391f6d395fec125f43abcdd"

CONAN_INCLUDEPATH_ZLIB += "/home/alina/.conan/data/zlib/1.2.11/_/_/package/6af9cc7cb931c5ad942174fd7838eb655717c709/include"
CONAN_LIBS_ZLIB += -lz
CONAN_SYSTEMLIBS_ZLIB += 
CONAN_FRAMEWORKS_ZLIB += 
CONAN_FRAMEWORK_PATHS_ZLIB += 
CONAN_LIBDIRS_ZLIB += -L"/home/alina/.conan/data/zlib/1.2.11/_/_/package/6af9cc7cb931c5ad942174fd7838eb655717c709/lib"
CONAN_BINDIRS_ZLIB += 
CONAN_RESDIRS_ZLIB += 
CONAN_BUILDDIRS_ZLIB += "/home/alina/.conan/data/zlib/1.2.11/_/_/package/6af9cc7cb931c5ad942174fd7838eb655717c709/"
CONAN_DEFINES_ZLIB += 
CONAN_QMAKE_CXXFLAGS_ZLIB += 
CONAN_QMAKE_CFLAGS_ZLIB += 
CONAN_QMAKE_LFLAGS_ZLIB += 
CONAN_QMAKE_LFLAGS_ZLIB += 
CONAN_ZLIB_ROOT = "/home/alina/.conan/data/zlib/1.2.11/_/_/package/6af9cc7cb931c5ad942174fd7838eb655717c709"

CONFIG(conan_basic_setup) {
    INCLUDEPATH += $$CONAN_INCLUDEPATH
    LIBS += $$CONAN_LIBS
    LIBS += $$CONAN_LIBDIRS
    BINDIRS += $$CONAN_BINDIRS
    DEFINES += $$CONAN_DEFINES
    CONFIG(release, debug|release) {
        INCLUDEPATH += $$CONAN_INCLUDEPATH_RELEASE
        LIBS += $$CONAN_LIBS_RELEASE
        LIBS += $$CONAN_LIBDIRS_RELEASE
        BINDIRS += $$CONAN_BINDIRS_RELEASE
        DEFINES += $$CONAN_DEFINES_RELEASE
    } else {
        INCLUDEPATH += $$CONAN_INCLUDEPATH_DEBUG
        LIBS += $$CONAN_LIBS_DEBUG
        LIBS += $$CONAN_LIBDIRS_DEBUG
        BINDIRS += $$CONAN_BINDIRS_DEBUG
        DEFINES += $$CONAN_DEFINES_DEBUG
    }
    LIBS += $$CONAN_SYSTEMLIBS
    CONFIG(release, debug|release) {
        LIBS += $$CONAN_SYSTEMLIBS_RELEASE
    } else {
        LIBS += $$CONAN_SYSTEMLIBS_DEBUG
    }
    LIBS += $$CONAN_FRAMEWORKS
    LIBS += $$CONAN_FRAMEWORK_PATHS
    CONFIG(release, debug|release) {
        LIBS += $$CONAN_FRAMEWORKS_RELEASE
        LIBS += $$CONAN_FRAMEWORK_PATHS_RELEASE
    } else {
        LIBS += $$CONAN_FRAMEWORKS_DEBUG
        LIBS += $$CONAN_FRAMEWORK_PATHS_DEBUG
    }
    QMAKE_CXXFLAGS += $$CONAN_QMAKE_CXXFLAGS
    QMAKE_CFLAGS += $$CONAN_QMAKE_CFLAGS
    QMAKE_LFLAGS += $$CONAN_QMAKE_LFLAGS
    QMAKE_CXXFLAGS_DEBUG += $$CONAN_QMAKE_CXXFLAGS_DEBUG
    QMAKE_CFLAGS_DEBUG += $$CONAN_QMAKE_CFLAGS_DEBUG
    QMAKE_LFLAGS_DEBUG += $$CONAN_QMAKE_LFLAGS_DEBUG
    QMAKE_CXXFLAGS_RELEASE += $$CONAN_QMAKE_CXXFLAGS_RELEASE
    QMAKE_CFLAGS_RELEASE += $$CONAN_QMAKE_CFLAGS_RELEASE
    QMAKE_LFLAGS_RELEASE += $$CONAN_QMAKE_LFLAGS_RELEASE
}