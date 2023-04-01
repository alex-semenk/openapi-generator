/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ArrayTest.h
 *
 * 
 */

#ifndef ArrayTest_H_
#define ArrayTest_H_



#include <string>
#include <vector>
#include "ReadOnlyFirst.h"
#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>
#include "helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ArrayTest 
{
public:
    ArrayTest() = default;
    explicit ArrayTest(boost::property_tree::ptree const& pt);
    virtual ~ArrayTest() = default;

    ArrayTest(const ArrayTest& other) = default; // copy constructor
    ArrayTest(ArrayTest&& other) noexcept = default; // move constructor

    ArrayTest& operator=(const ArrayTest& other) = default; // copy assignment
    ArrayTest& operator=(ArrayTest&& other) noexcept = default; // move assignment

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);


    /////////////////////////////////////////////
    /// ArrayTest members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getArrayOfString() const;
    void setArrayOfString(std::vector<std::string> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::vector<int64_t>> getArrayArrayOfInteger() const;
    void setArrayArrayOfInteger(std::vector<std::vector<int64_t>> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::vector<ReadOnlyFirst>> getArrayArrayOfModel() const;
    void setArrayArrayOfModel(std::vector<std::vector<ReadOnlyFirst>> value);

protected:
    std::vector<std::string> m_Array_of_string;
    std::vector<std::vector<int64_t>> m_Array_array_of_integer;
    std::vector<std::vector<ReadOnlyFirst>> m_Array_array_of_model;
};

std::vector<ArrayTest> createArrayTestVectorFromJsonString(const std::string& json);

template<>
inline boost::property_tree::ptree toPt<ArrayTest>(const ArrayTest& val) {
    return val.toPropertyTree();
}

template<>
inline ArrayTest fromPt<ArrayTest>(const boost::property_tree::ptree& pt) {
    ArrayTest ret;
    ret.fromPropertyTree(pt);
    return ret;
}

}
}
}
}

#endif /* ArrayTest_H_ */
